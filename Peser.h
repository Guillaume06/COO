#ifndef PESER_H
#define PESER_H
#include "Command_Robot.h"

using namespace std;

class Peser : public Command_Robot{
    public :
        Peser(Robot* r);
        void execute();
        void desexecute();
};


#endif