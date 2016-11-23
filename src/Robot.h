#include "Objet.h"
#include "EtatRobot.h"
#include <iostream>

#ifndef ROBOT_H
#define ROBOT_H

using namespace std;


class Robot{

    private : 
        Objet* o;
        EtatRobot* etat;
        string direction;

    public :

        void setEtat(EtatRobot* e);
        EtatRobot* getEtat();
        Robot();
        void saisir(Objet obj){
            try{
                etat = etat->saisir();
                *o = obj;
            }catch(const std::exception& ex){
                cout << "Action impossible dans cet état" << endl;
            }
        }

        void figer(){
            try{
            }catch(const std::exception& ex){
                cout << "Action impossible dans cet état" << endl;
            }
        }
        void repartir(){
            try{
            }catch(const std::exception& ex){
                cout << "Action impossible dans cet état" << endl;
            }
        }

};

#endif
