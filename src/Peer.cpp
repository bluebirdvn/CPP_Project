#include "Peer.hpp"
#include <iostream>
#include <sys/socket.h>
#include <unistd.h>
#include <sys/select.h>

Peer::Peer(int id, std::unique_ptr<SocketWrapper> socket, std::string ip, int port)
    : id_(id), socket_(std::move(socket)), ip_(std::move(ip)), port_(port), running_(true) {
    listener_thread_ = std::thread(&Peer::listen_for_messages, this);
}

Peer::~Peer() {
    running_ = false;
    if (listener_thread_.joinable()) {
        listener_thread_.join();
    }
}

void Peer::listen_for_messages() {
    char buffer[4096];
    while (running_) {
        fd_set read_fds;
        FD_ZERO(&read_fds);
        FD_SET(socket_->get(), &read_fds);

        struct timeval tv;
        tv.tv_sec = 1;
        tv.tv_usec = 0;

        int activity = select(socket_->get() + 1, &read_fds, nullptr, nullptr, &tv);

        if (activity < 0) {
            if (running_) std::cerr << "Error in select() for peer " << id_ << std::endl;
            break;
        }

        if (activity > 0 && FD_ISSET(socket_->get(), &read_fds)) {
            int bytes_received = read(socket_->get(), buffer, sizeof(buffer) - 1);
            if (bytes_received <= 0) {
                std::cout << "\nPeer " << id_ << " (" << ip_ << ":" << port_ << ") disconnected." << std::endl;
                running_ = false; 
            } else {
                buffer[bytes_received] = '\0';
                std::cout << "\n[Message from " << id_ << "]: " << buffer << std::endl;
            }
        }
    }
}

bool Peer::send_message(const std::string& message) {
    if (write(socket_->get(), message.c_str(), message.length()) < 0) {
        std::cerr << "Failed to send message to peer " << id_ << std::endl;
        return false;
    }
    return true;
}

int Peer::get_id() const { return id_; }
std::string Peer::get_ip() const { return ip_; }
int Peer::get_port() const { return port_; }