#ifndef FIGER_H
#define FIGER_H
#include "Command_Robot.h"

using namespace std;

class Figer : public Command_Robot{
    public :
        Figer(Robot* r);
        void execute();
        void desexecute();
};


#endif