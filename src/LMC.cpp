
#include <iostream>

#include "exceptions/commands/CommandException.h"
#include "handlers/CommandHandler.h"

int main(const int argc, char* argv[])
{
    if(argc < 2) { std::cout << "No command provided\n"; return 1; }
    
    try { commandHandler(argv[1], argv + 2); }
    catch (const CommandException& e) { std::cout << e.what() << '\n'; }
}
