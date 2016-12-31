#ifndef TOURNER_H
#define TOURNER_H
#include "Command_Robot.h"

using namespace std;

class Tourner : public Command_Robot{
    private :
        string direction;
    public :
        Tourner(string direction, Robot* r);
        void execute();
        void desexecute();
};


#endif