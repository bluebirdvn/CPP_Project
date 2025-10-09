#pragma once

#include <unistd.h> // For close()

class SocketWrapper {
public:
    explicit SocketWrapper(int fd = -1) : socket_fd(fd) {}

    ~SocketWrapper() {
        if (socket_fd != -1) {
            close(socket_fd);
        }
    }

    // Xóa copy constructor và copy assignment
    SocketWrapper(const SocketWrapper&) = delete;
    SocketWrapper& operator=(const SocketWrapper&) = delete;

    // Cho phép move semantics
    SocketWrapper(SocketWrapper&& other) noexcept : socket_fd(other.socket_fd) {
        other.socket_fd = -1;
    }
    SocketWrapper& operator=(SocketWrapper&& other) noexcept {
        if (this != &other) {
            if (socket_fd != -1) close(socket_fd);
            socket_fd = other.socket_fd;
            other.socket_fd = -1;
        }
        return *this;
    }

    int get() const { return socket_fd; }

private:
    int socket_fd;
};