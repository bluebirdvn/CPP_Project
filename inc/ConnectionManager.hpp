#pragma once

#include <map>
#include <mutex>
#include <memory>
#include <string>
#include "Peer.hpp" // Cần định nghĩa đầy đủ của Peer

class ConnectionManager {
public:
    static ConnectionManager& get_instance();

    // Ngăn chặn copy và assignment
    ConnectionManager(const ConnectionManager&) = delete;
    void operator=(const ConnectionManager&) = delete;

    void add_peer(std::unique_ptr<SocketWrapper> socket, const std::string& ip, int port);
    void list_peers();
    void send_to_peer(int id, const std::string& message);
    void terminate_peer(int id);
    void shutdown_all();

private:
    ConnectionManager() = default;
    ~ConnectionManager() = default;

    std::map<int, std::unique_ptr<Peer>> peers_;
    std::mutex peers_mutex_;
    std::atomic<int> next_id_{1};
};