#ifndef AVANCER_H
#define AVANCER_H
#include "Command_Robot.h"

class Avancer : public Command_Robot{
    private :
        int x = 0;
        int y = 0;
    public :
        Avancer(int x, int y, Robot* r);
        int getX(){return x;}
        int getY(){return y;}
        void execute();
        void desexecute();
};


#endif