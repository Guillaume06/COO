
#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>
#include <vector>
#include "Plot.h"
#include "Position.h"
#include "Objet.h"
#include "EtatRobot.h"

using namespace std;
class Observateur;

class Robot{

    private :
        Plot                    plot;
        Position                p;
        Objet                   o;
        EtatRobot*              etat;
        EtatRobot*              save;
        string                  direction       = "Droite";
        string                  directionInit   = "Init";
        vector<Observateur*>    observateur;

    public :
                    Robot();
                    Robot(vector<Observateur*> obs);
        int         getX(){return p.getX();}
        int         getY(){return p.getY();}
        void        notifyAll();
        void        afficher();
        void        setEtat(EtatRobot* e);
        void        addObservateur(Observateur* o);
        EtatRobot*  getEtat();
        EtatRobot*  setSave();
        EtatRobot*  getSave();
        string      getDirection(){return direction;}
        string      getDirectionInitiale(){return directionInit;}
        void        saisir(Objet o);
        void        figer();
        void        repartir();
        void        avancer(int x, int y);
        void        tourner(string direction);
        int         peser();
        void        poser();
        void        rencontrerPlot(Plot p);
        int         evaluerPlot();

};

#endif
