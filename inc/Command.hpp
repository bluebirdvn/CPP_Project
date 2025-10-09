#pragma once

#include <memory>
#include <string>
#include <vector>

// Interface for Command
class Command {
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
};

// Parser create objects for Command
class CommandParser {
public:
    CommandParser(std::string my_ip, int my_port);
    std::unique_ptr<Command> parse(const std::string& input);
private:
    std::string my_ip_;
    int my_port_;
};