#ifndef PARSER_H
#define PARSER_H
#include <string>
#include <vector>
#include <map>

using namespace std;

enum CommandName {DEFAIRE, FIGER, REPARTIR, AVANCER, TOURNER, EVALUERPLOT, SAISIR, POSER, PESER, RENCONTRERPLOT};

typedef struct Command{
    CommandName command;
    vector<int> parameters;
}Command;

class Parser{
    private :
        map<std::string, CommandName> stringToCommand;
        map<CommandName, std::string> commandToString;
        vector<Command> commands;
    public :
        Parser(string filename);
        void printCommands();
};

#endif
