#include "Command.hpp"
#include "ConnectionManager.hpp"
#include <iostream>
#include <sstream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>


class ConnectCmd : public Command {
public:
    ConnectCmd(std::string ip, int port) : ip_(std::move(ip)), port_(port) {}
    void execute() override {
        int sock = socket(AF_INET, SOCK_STREAM, 0);
        if (sock < 0) { std::cerr << "Failed to create socket.\n"; return; }

        sockaddr_in server_addr;
        server_addr.sin_family = AF_INET;
        server_addr.sin_port = htons(port_);
        
        if (inet_pton(AF_INET, ip_.c_str(), &server_addr.sin_addr) <= 0) {
            std::cerr << "Invalid IP address.\n"; close(sock); return;
        }

        if (connect(sock, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
            std::cerr << "Connection Failed.\n"; close(sock); return;
        }

        ConnectionManager::get_instance().add_peer(std::make_unique<SocketWrapper>(sock), ip_, port_);
    }
private:
    std::string ip_;
    int port_;
};

class ListCmd : public Command {
public:
    void execute() override { ConnectionManager::get_instance().list_peers(); }
};

class SendCmd : public Command {
public:
    SendCmd(int id, std::string message) : id_(id), message_(std::move(message)) {}
    void execute() override { ConnectionManager::get_instance().send_to_peer(id_, message_); }
private:
    int id_;
    std::string message_;
};

class TerminateCmd : public Command {
public:
    explicit TerminateCmd(int id) : id_(id) {}
    void execute() override { ConnectionManager::get_instance().terminate_peer(id_); }
private:
    int id_;
};

class MyIPCmd : public Command {
public:
    explicit MyIPCmd(std::string ip) : ip_(std::move(ip)) {}
    void execute() override { std::cout << "Listening IP: " << ip_ << std::endl; }
private:
    std::string ip_;
};

class MyPortCmd : public Command {
public:
    explicit MyPortCmd(int port) : port_(port) {}
    void execute() override { std::cout << "Listening Port: " << port_ << std::endl; }
private:
    int port_;
};

class HelpCmd : public Command {
public:
    void execute() override {
        std::cout << "Available commands:\n"
                  << "  connect <IP> <PORT>    - Connect to a new peer.\n"
                  << "  list                   - List all connected peers.\n"
                  << "  send <ID> <MESSAGE>    - Send a message to a peer.\n"
                  << "  terminate <ID>         - Close connection to a peer.\n"
                  << "  myip                   - Show my listening IP.\n"
                  << "  myport                 - Show my listening port.\n"
                  << "  help                   - Show this help message.\n"
                  << "  exit                   - Shutdown the application.\n";
    }
};



CommandParser::CommandParser(std::string my_ip, int my_port) : my_ip_(std::move(my_ip)), my_port_(my_port) {}

std::unique_ptr<Command> CommandParser::parse(const std::string& input) {
    std::stringstream ss(input);
    std::string cmd;
    ss >> cmd;

    if (cmd == "connect") {
        std::string ip; int port;
        if (ss >> ip >> port) return std::make_unique<ConnectCmd>(ip, port);
    }
    if (cmd == "list") return std::make_unique<ListCmd>();
    if (cmd == "send") {
        int id; std::string message;
        ss >> id;
        std::getline(ss, message);
        message.erase(0, message.find_first_not_of(" \t\n\r"));
        if (!message.empty()) return std::make_unique<SendCmd>(id, message);
    }
    if (cmd == "terminate") {
        int id; 
        if (ss >> id) return std::make_unique<TerminateCmd>(id);
    }
    if (cmd == "myip") return std::make_unique<MyIPCmd>(my_ip_);
    if (cmd == "myport") return std::make_unique<MyPortCmd>(my_port_);
    if (cmd == "help") return std::make_unique<HelpCmd>();
    
    return nullptr; 
}