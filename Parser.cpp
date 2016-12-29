#include "Parser.h"
#include <sstream>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

Parser::Parser(string filename){
    cout << "Parsing command file " + filename << endl;
    Command tmp;
    vector<int> parameters;
    bool commandFind = false;
    string temp = "";
    string command = "";
    string line;
    std::ifstream infile(filename);
    while (std::getline(infile, line)){
        for(unsigned int i = 0; i < line.length(); ++i)
        {
            char c = line[i];
            if (c != ' '){
                temp += c;
            }else if (commandFind == false){
                command = temp;
                temp = "";
                commandFind = true;
            }else{
                parameters.push_back(stoi(temp));
                temp = "";
            }
        }
        if (commandFind == false){
            command = temp;
        }else{
            if (command.compare("SAISIR") != 0){
                parameters.push_back(stoi(temp));
            }
        }
        tmp.command = command;
        tmp.parameters = parameters;
        commands.push_back(tmp);
        command = "";
        temp = "";
        commandFind = false;
        parameters.clear();

    }
}

void Parser::printCommands(){
    for(unsigned int i = 0; i < commands.size(); i++){
       cout << "Command : " + commands[i].command;
       cout << ", Parameters : ";
       for(unsigned int j = 0; j < commands[i].parameters.size(); j++){
              cout << to_string(commands[i].parameters[j]) + " ";
       }
       cout << endl;
    }
}