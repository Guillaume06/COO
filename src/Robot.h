#include "Objet.h"
#include "EtatRobot.h"
#include <iostream>

#ifndef ROBOT_H
#define ROBOT_H

using namespace std;
class Observateur;
class Robot{

    private : 
        Objet*      o;
        EtatRobot*  etat;
        EtatRobot*  save;
        string      direction;
        Observateur* observateur;

    public :

        void setEtat(EtatRobot* e);
        void setObservateur(Observateur* o);
        EtatRobot* getEtat();
        EtatRobot* setSave();
        EtatRobot* getSave();
        Robot(Observateur* obs);
        void saisir(Objet o);
        void fige();
        void repartir();

};

#endif
