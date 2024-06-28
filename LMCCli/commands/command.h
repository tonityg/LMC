﻿#pragma once
#include <string>
#include <vector>

class Command
{
    const std::string _name;
    const std::vector<std::string> _aliases;

public:
    Command(std::string name, std::vector<std::string> aliases) : _name(std::move(name)), _aliases(std::move(aliases)) {}
    
    std::string name() const { return _name; }
    std::vector<std::string> aliases() const { return _aliases; }
    
    /**
    * Handle command arguments.
    *
    * @param args Command arguments
    * @throw command_invalid_arguments_exception If arguments are invalid
     */
    virtual void handler(char* args[]) = 0;

protected:
    ~Command() = default;

    /**
     * Print help message.
     */
    virtual void help() = 0;
};
