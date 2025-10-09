#pragma once

#include <string>
#include <thread>
#include <atomic>
#include <memory>
#include "SocketWrapper.hpp"

class Peer {
public:
    Peer(int id, std::unique_ptr<SocketWrapper> socket, std::string ip, int port);
    ~Peer();
    
    // Ngăn chặn copy
    Peer(const Peer&) = delete;
    Peer& operator=(const Peer&) = delete;

    bool send_message(const std::string& message);
    int get_id() const;
    std::string get_ip() const;
    int get_port() const;

private:
    void listen_for_messages();

    int id_;
    std::unique_ptr<SocketWrapper> socket_;
    std::string ip_;
    int port_;
    std::thread listener_thread_;
    std::atomic<bool> running_;
};