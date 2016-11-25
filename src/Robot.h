#include "Objet.h"
#include "EtatRobot.h"
#include <iostream>
#include <vector>

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
        vector<Observateur*> observateur;
        void notifyAll();

    public :

        void afficherEtat();
        void setEtat(EtatRobot* e);
        void addObservateur(Observateur* o);
        EtatRobot* getEtat();
        EtatRobot* setSave();
        EtatRobot* getSave();
        Robot(vector<Observateur*> obs);
        void saisir(Objet o);
        void fige();
        void repartir();

};

#endif
