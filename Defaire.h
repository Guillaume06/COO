#ifndef DEFAIRE_H
#define DEFAIRE_H
#include "Command_Robot.h"

class Defaire : public Command_Robot{
    private :
    public :
        Defaire(Robot* r);
        void execute();
        void desexecute();
};


#endif