#include "Exceptions/Commands/CommandException.h"
#include "Handlers/CommandHandler.h"

#include <iostream>

int main(const int argc, char* argv[]) {
    if(argc < 2) { std::cerr << "No command provided\n"; return 1; }
    
    try { LMC::CommandHandler(argv[1], argv + 2); }
    catch (const LMC::CommandException& e) { std::cerr << e.what() << '\n'; }
}
