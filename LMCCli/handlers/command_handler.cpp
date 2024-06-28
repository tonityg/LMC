﻿#include "command_handler.h"

#include "../commands/launch_command.h"
#include "../exceptions/commands/command_not_found_exception.h"

std::vector<Command*> commands = {
    new LaunchCommand()
};

void commandHandler(const char* command, char* args[])
{
    for (const auto& currentCmd : commands)
    {
        if (strcmp(command, currentCmd->name().c_str()) == 0)
        {
            currentCmd->handler(args);
            return;
        }
    }
    throw CommandNotFoundException(command);
}
