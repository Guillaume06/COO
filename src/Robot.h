
#ifndef ROBOT_H
#define ROBOT_H
#include "Objet.h"
#include "EtatRobot.h"
#include <iostream>
#include <vector>
#include "Plot.h"
#include "Position.h"

using namespace std;
class Observateur;
class Robot{

    private : 
        Position p;
        Objet      o;
        EtatRobot*  etat;
        EtatRobot*  save;
        string      direction;
        vector<Observateur*> observateur;
        void notifyAll();

    public :

        void afficher();
        void setEtat(EtatRobot* e);
        void addObservateur(Observateur* o);
        EtatRobot* getEtat();
        EtatRobot* setSave();
        EtatRobot* getSave();
        Robot(vector<Observateur*> obs);
        void saisir(Objet o);
        void figer();
        void repartir();
        void avancer(int x, int y);
        void tourner(string direction);
        int peser();
        void rencontretPlot(Plot p);

};

#endif
