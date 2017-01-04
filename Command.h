#ifndef COMMAND_H
#define COMMAND_H
#include "Parser.h"

enum CommandName;

class Command{
    private :
    public :
        static Command* returnCommand(CommandStruct command, Robot* r);
        virtual void execute() = 0;
        virtual void desexecute() = 0;
};

#endif
