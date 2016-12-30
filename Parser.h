#ifndef PARSER_H
#define PARSER_H
#include <string>
#include <vector>
#include <map>
#include "Robot.h"

using namespace std;

enum CommandName {DEFAIRE, FIGER, REPARTIR, AVANCER, TOURNER, EVALUERPLOT, SAISIR, POSER, PESER, RENCONTRERPLOT};

typedef struct CommandStruct{
    CommandName command;
    vector<int> parameters;
}CommandStruct;

class Parser{
    private :
        Robot* r;
        map<std::string, CommandName> stringToCommand;
        map<CommandName, std::string> commandToString;
        vector<CommandStruct> commands;
    public :
        void start();
        Parser(string filename, vector<Observateur*> obs);
        void printCommands();
};

#endif
