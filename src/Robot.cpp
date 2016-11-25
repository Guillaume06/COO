#include "Robot.h"
#include "AVide.h"
#include "Observateur.h"
using namespace std;

void Robot::notifyAll(){
    for (unsigned int i = 0; i < observateur.size(); i++){
        observateur.at(i)->notify(this);
    }
}

Robot::Robot(vector<Observateur*> obs){
	etat = &AVide::Instance();
	observateur = obs;
    cout << "Robot créé, état initial : AVide" << endl;
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

void Robot::addObservateur(Observateur* obs){
	observateur.push_back(obs); 
    cout << "Observateur ajouté" << endl;
}

void Robot::saisir(Objet obj){
    try{
        cout << "Action : " << endl;
        cout << "\tSaisir" << endl;
        etat    = etat->saisir();
        *o      = obj;
        notifyAll();
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
}

void Robot::fige(){
    try{
        cout << "Action : " << endl;
        cout << "\tFige" << endl;
        EtatRobot* tmp = etat->fige();
        save = etat;
        etat = tmp;
        notifyAll();
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
}

void Robot::afficher(){
    notifyAll();
}

void Robot::repartir(){
    try{
        cout << "Action : " << endl;
        cout << "\tRepartir" << endl;
	    etat ->repartir();
        *etat = *save;
        notifyAll();
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
}