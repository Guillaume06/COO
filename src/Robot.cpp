#include "Robot.h"
#include "AVide.h"
#include "Observateur.h"

Robot::Robot(Observateur* obs){
	etat = &AVide::Instance();
	observateur = obs;
}

void Robot::setEtat(EtatRobot* e){
	etat = e;
}

EtatRobot* Robot::getEtat(){
	return etat;
}

EtatRobot* Robot::getSave(){
	return save;
}

EtatRobot* Robot::setSave(){
	return save;
}

void Robot::setObservateur(Observateur* obs){
	observateur = obs; 
}

void Robot::saisir(Objet obj){
    try{
        etat    = etat->saisir();
        *o      = obj;
        observateur->notify(this);
    }catch(const std::exception& ex){
        cout << "Action impossible dans cet état" << endl;
    }
}

void Robot::fige(){
    try{
        EtatRobot* tmp = etat->fige();
        save = etat;
        etat = tmp;
        observateur->notify(this);
    }catch(const std::exception& ex){
        cout << "Action impossible dans cet état" << endl;
    }
}

void Robot::afficherEtat(){
    observateur->notify(this);
}

void Robot::repartir(){
    try{
	    etat ->repartir();
        *etat = *save;
        observateur->notify(this);
    }catch(const std::exception& ex){
        cout << "Action impossible dans cet état" << endl;
    }
}
