#include "Objet.h"
#include "EtatRobot.h"
#include <iostream>

#ifndef ROBOT_H
#define ROBOT_H

using namespace std;
class Robot;
class Observateur;
class Observateur{
    public :
        Observateur();
        void notify(Robot* r);
};
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
        void saisir(Objet obj){
            try{
                etat    = etat->saisir();
                *o      = obj;
                observateur->notify(this);
            }catch(const std::exception& ex){
                cout << "Action impossible dans cet état" << endl;
            }
        }

        void fige(){
            try{
                EtatRobot* tmp = etat->fige();
                save = etat;
                etat = tmp;
                observateur->notify(this);
            }catch(const std::exception& ex){
                cout << "Action impossible dans cet état" << endl;
            }
        }

        void repartir(){
            try{
                etat ->repartir();
                *etat = *save;
                observateur->notify(this);
            }catch(const std::exception& ex){
                cout << "Action impossible dans cet état" << endl;
            }
        }

};

#endif
