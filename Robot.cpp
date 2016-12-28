#include "Robot.h"
#include "AVide.h"
#include "Observateur.h"
#include <typeinfo>
#include <string>
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
        cout << "*******************************************" << endl;
        notifyAll();
        cout << "Action : " << endl;
        cout << "\tSaisir" << endl;
        etat    = etat->saisir();
        o      = obj;
        notifyAll();
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
}

void Robot::figer(){
    try{
        cout << "*******************************************" << endl;
        notifyAll();
        cout << "Action : " << endl;
        cout << "\tFige" << endl;
        EtatRobot* tmp = etat->figer();
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
        cout << "*******************************************" << endl;
        notifyAll();
        cout << "Action : " << endl;
        cout << "\tRepartir" << endl;
	    etat ->repartir();
        etat = save;
        notifyAll();
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
}

void Robot::rencontrerPlot(Plot p){
    try{
        cout << "*******************************************" << endl;
        notifyAll();
        cout << "Action : " << endl;
        cout << "\tRencontrerPlot" << endl;
	    etat = etat ->rencontrerPlot();
	    directionInit = direction;
        notifyAll();
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
}

void Robot::poser(){
    try{
        cout << "*******************************************" << endl;
        notifyAll();
        cout << "Action : " << endl;
        cout << "\tPoser" << endl;
	    etat = etat ->poser();
        notifyAll();
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
}


void Robot::tourner(string direction){

    try{
        cout << "*******************************************" << endl;
        notifyAll();
        cout << "Action : " << endl;
        cout << "\tTourner" << endl;
            EtatRobot* tmp = etat;
	    etat = etat ->tourner();
	    this->direction = direction;
	    if (typeid(*etat) != typeid(*tmp)){
	        printf("HERE\n");
	        directionInit = direction;
	    }
	    if (directionInit.compare(this->direction) == 0){
	        etat = etat->changeStateMoveToInit();
	    }else{
	        etat = etat->changeStateMove();
	    }
        notifyAll();
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
}
