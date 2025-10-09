#include "ConnectionManager.hpp"
#include <iostream>
#include <algorithm>

ConnectionManager& ConnectionManager::get_instance() {
    static ConnectionManager instance;
    return instance;
}

void ConnectionManager::add_peer(std::unique_ptr<SocketWrapper> socket, const std::string& ip, int port) {
    std::lock_guard<std::mutex> lock(peers_mutex_);
    int new_id = next_id_++;
    peers_[new_id] = std::make_unique<Peer>(new_id, std::move(socket), ip, port);
    std::cout << "Peer " << ip << ":" << port << " connected with ID: " << new_id << std::endl;
}

void ConnectionManager::list_peers() {
    std::lock_guard<std::mutex> lock(peers_mutex_);
    std::cout << "ID\tIP Address\tPort" << std::endl;
    std::cout << "--\t----------\t----" << std::endl;
    for (const auto& pair : peers_) {
        std::cout << pair.second->get_id() << "\t" << pair.second->get_ip() << "\t" << pair.second->get_port() << std::endl;
    }
}

void ConnectionManager::send_to_peer(int id, const std::string& message) {
    std::lock_guard<std::mutex> lock(peers_mutex_);
    auto it = peers_.find(id);
    if (it != peers_.end()) {
        it->second->send_message(message);
    } else {
        std::cerr << "Error: Peer with ID " << id << " not found." << std::endl;
    }
}

void ConnectionManager::terminate_peer(int id) {
    std::lock_guard<std::mutex> lock(peers_mutex_);
    if (peers_.erase(id) > 0) {
        std::cout << "Terminated connection with peer " << id << "." << std::endl;
    } else {
        std::cerr << "Error: Peer with ID " << id << " not found." << std::endl;
    }
}

void ConnectionManager::shutdown_all() {
    std::lock_guard<std::mutex> lock(peers_mutex_);
    peers_.clear();
}