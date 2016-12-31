#ifndef SAISIR_H
#define SAISIR_H
#include "Command_Robot.h"
#include "Objet.h"

using namespace std;

class Saisir : public Command_Robot{
    private :
        Objet o;
    public :
        Saisir(Objet o, Robot* r);
        void execute();
        void desexecute();
};


#endif