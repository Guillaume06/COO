#include "Parser.h"
#include <sstream>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

Parser::Parser(string filename){
    // Map init
    stringToCommand.insert(pair<string, CommandName>("FIGER", FIGER));
    stringToCommand.insert(pair<string, CommandName>("REPARTIR", REPARTIR));
    stringToCommand.insert(pair<string, CommandName>("AVANCER", AVANCER));
    stringToCommand.insert(pair<string, CommandName>("TOURNER", TOURNER));
    stringToCommand.insert(pair<string, CommandName>("EVALUERPLOT", EVALUERPLOT));
    stringToCommand.insert(pair<string, CommandName>("SAISIR", SAISIR));
    stringToCommand.insert(pair<string, CommandName>("POSER", POSER));
    stringToCommand.insert(pair<string, CommandName>("PESER", PESER));
    stringToCommand.insert(pair<string, CommandName>("RENCONTRERPLOT", RENCONTRERPLOT));

    // Second Map Init
    commandToString.insert(pair<CommandName, string>(FIGER, "FIGER"));
    commandToString.insert(pair<CommandName, string>(REPARTIR, "REPARTIR"));
    commandToString.insert(pair<CommandName, string>(AVANCER, "AVANCER"));
    commandToString.insert(pair<CommandName, string>(TOURNER, "TOURNER"));
    commandToString.insert(pair<CommandName, string>(EVALUERPLOT, "EVALUERPLOT"));
    commandToString.insert(pair<CommandName, string>(SAISIR, "SAISIR"));
    commandToString.insert(pair<CommandName, string>(POSER, "POSER"));
    commandToString.insert(pair<CommandName, string>(PESER, "PESER"));
    commandToString.insert(pair<CommandName, string>(RENCONTRERPLOT, "RENCONTRERPLOT"));



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
        tmp.command = stringToCommand.find(command)->second;
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
       cout << "Command : " + commandToString.find(commands[i].command)->second;
       cout << ", Parameters : ";
       for(unsigned int j = 0; j < commands[i].parameters.size(); j++){
              cout << to_string(commands[i].parameters[j]) + " ";
       }
       cout << endl;
    }
}