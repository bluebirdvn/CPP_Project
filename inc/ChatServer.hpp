#pragma once

#include <string>
#include <thread>
#include <atomic>
#include <memory>
#include "SocketWrapper.hpp"

class ChatServer {
public:
    ChatServer(const std::string& ip, int port);
    void start();
    void stop();

private:
    void accept_connections();

    std::string ip_;
    int port_;
    std::unique_ptr<SocketWrapper> server_socket_;
    std::thread server_thread_;
    std::atomic<bool> running_;
};