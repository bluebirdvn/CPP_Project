#include <iostream>
#include <string>
#include <stdexcept>

#include "ChatServer.hpp"
#include "Command.hpp"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: ./P2PChatApp <IP_ADDRESS> <PORT>" << std::endl;
        return 1;
    }

    std::string my_ip = argv[1];
    int my_port;
    try {
        my_port = std::stoi(argv[2]);
    } catch (const std::exception& e) {
        std::cerr << "Invalid port number." << std::endl;
        return 1;
    }

    ChatServer server(my_ip, my_port);
    try {
        server.start();
    } catch (const std::runtime_error& e) {
        std::cerr << "Error starting server: " << e.what() << std::endl;
        return 1;
    }

    CommandParser parser(my_ip, my_port);
    std::string line;

    while (true) {
        std::cout << "> ";
        if (!std::getline(std::cin, line)) {
            break;
        }
        
        if (line == "exit") {
            break;
        }
        
        auto command = parser.parse(line);
        if (command) {
            command->execute();
        } else {
            if(!line.empty()) {
                std::cerr << "Unknown command. Type 'help' for a list of commands." << std::endl;
            }
        }
    }

    std::cout << "Shutting down..." << std::endl;
    server.stop();
    return 0;
}