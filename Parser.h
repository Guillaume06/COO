#ifndef PARSER_H
#define PARSER_H
#include <string>
#include <vector>

using namespace std;

typedef struct Command{
    string command;
    vector<int> parameters;
}Command;

class Parser{
    private :
        vector<Command> commands;
    public :
        Parser(string filename);
        void printCommands();
};

#endif
