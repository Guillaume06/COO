
#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>
#include <vector>
#include "Plot.h"
#include "Position.h"
#include "Objet.h"
#include "EtatRobot.h"
#include "CommandName.h"

using namespace std;
class Observateur;
class Robot{

    private :
        vector<Robot>           saveState;
        vector<CommandName>     saveCommand;
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

        int         getCommandSize(){return saveCommand.size();}
        int         getRobotSize(){return saveState.size();}
        void        addCommand(CommandName c){saveCommand.push_back(c);}
        void        deleteCommand(){if (saveCommand.size() > 0) saveCommand.pop_back();}
        void        deleteState(){if (saveState.size() > 0) saveState.pop_back();}

        CommandName getCommand(){
            CommandName c = saveCommand[saveCommand.size()-1];
            saveCommand.pop_back();
            return c;
        }
        Robot       getRobot(){
            Robot r = saveState[saveState.size()-1];
            saveState.pop_back();
            return r;
        }

        Objet       getObjet(){return o;}
        void        addState(Robot r){saveState.push_back(r);}
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
        void        setDirection(string dir){direction = dir;}
        string      getDirectionInit(){return directionInit;}
        void        setDirectionInit(string dir){directionInit = dir;}
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
