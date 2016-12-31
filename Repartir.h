#ifndef REPARTIR_H
#define REPARTIR_H
#include "Command_Robot.h"

using namespace std;

class Repartir : public Command_Robot{
    public :
        Repartir(Robot* r);
        void execute();
        void desexecute();
};


#endif