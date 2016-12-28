
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
        string      direction="Droite";
        string      directionInit="Droite";
        vector<Observateur*> observateur;

    public :
        void notifyAll();
        void afficher();
        void setEtat(EtatRobot* e);
        void addObservateur(Observateur* o);
        EtatRobot* getEtat();
        EtatRobot* setSave();
        EtatRobot* getSave();
        string getDirection(){return direction;}
        string getDirectionInitiale(){return directionInit;}
        Robot(vector<Observateur*> obs);
        void saisir(Objet o);
        void figer();
        void repartir();
        void avancer(int x, int y);
        void tourner(string direction);
        int peser();
        void poser();
        void rencontrerPlot(Plot p);

};

#endif
