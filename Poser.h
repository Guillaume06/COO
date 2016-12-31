#ifndef POSER_H
#define POSER_H
#include "Command_Robot.h"

using namespace std;

class Poser : public Command_Robot{
    public :
        Poser(Robot* r);
        void execute();
        void desexecute();
};


#endif