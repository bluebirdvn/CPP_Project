#include "ChatServer.hpp"
#include "ConnectionManager.hpp"
#include <iostream>
#include <stdexcept>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

ChatServer::ChatServer(const std::string& ip, int port) : ip_(ip), port_(port), running_(false) {}

void ChatServer::start() {
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd < 0) throw std::runtime_error("Failed to create server socket");
    
    server_socket_ = std::make_unique<SocketWrapper>(server_fd);

    sockaddr_in address;
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = inet_addr(ip_.c_str());
    address.sin_port = htons(port_);

    if (bind(server_socket_->get(), (struct sockaddr*)&address, sizeof(address)) < 0) {
        throw std::runtime_error("Failed to bind to IP/Port");
    }
    if (listen(server_socket_->get(), 5) < 0) {
        throw std::runtime_error("Failed to listen on socket");
    }

    running_ = true;
    server_thread_ = std::thread(&ChatServer::accept_connections, this);
    std::cout << "Server listening on " << ip_ << ":" << port_ << std::endl;
}

void ChatServer::stop() {
    running_ = false;
    int dummy_socket = socket(AF_INET, SOCK_STREAM, 0);
    sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(port_);
    inet_pton(AF_INET, ip_.c_str(), &server_addr.sin_addr);
    connect(dummy_socket, (struct sockaddr*)&server_addr, sizeof(server_addr));
    close(dummy_socket);


    if (server_thread_.joinable()) {
        server_thread_.join();
    }
    ConnectionManager::get_instance().shutdown_all();
}

void ChatServer::accept_connections() {
    while (running_) {
        sockaddr_in client_addr;
        socklen_t client_len = sizeof(client_addr);
        int client_fd = accept(server_socket_->get(), (struct sockaddr*)&client_addr, &client_len);

        if (!running_) break;
        if (client_fd < 0) continue;

        auto client_socket = std::make_unique<SocketWrapper>(client_fd);
        char client_ip[INET_ADDRSTRLEN];
        inet_ntop(AF_INET, &client_addr.sin_addr, client_ip, INET_ADDRSTRLEN);
        int client_port = ntohs(client_addr.sin_port);

        ConnectionManager::get_instance().add_peer(std::move(client_socket), std::string(client_ip), client_port);
    }
}