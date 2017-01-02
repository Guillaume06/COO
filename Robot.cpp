#include "Robot.h"
#include "AVide.h"
#include "Observateur.h"
#include <typeinfo>
#include <string>
#include "CommandName.h"

using namespace std;

void Robot::notifyAll(){
    for (unsigned int i = 0; i < observateur.size(); i++){
        observateur.at(i)->notify(this);
    }
}

Robot::Robot(){
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
        Robot r = *this;
        cout << "*******************************************" << endl;
        notifyAll();
        cout << "Action : " << endl;
        cout << "\t Saisir" << endl;
        etat    = etat->saisir();
        o      = obj;
        notifyAll();
        saveState.push_back(r);
        saveCommand.push_back(SAISIR);
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
}

void Robot::figer(){
    try{
        Robot r = *this;
        cout << "*******************************************" << endl;
        notifyAll();
        cout << "Action : " << endl;
        cout << "\t Fige" << endl;
        EtatRobot* tmp = etat->figer();
        save = etat;
        etat = tmp;
        notifyAll();
        saveState.push_back(r);
        saveCommand.push_back(FIGER);
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
}

void Robot::afficher(){
    notifyAll();
}

void Robot::repartir(){
    try{
        Robot r = *this;
        cout << "*******************************************" << endl;
        notifyAll();
        cout << "Action : " << endl;
        cout << "\t Repartir" << endl;
	    etat ->repartir();
        etat = save;
        notifyAll();
        saveState.push_back(r);
        saveCommand.push_back(REPARTIR);
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
}

void Robot::rencontrerPlot(Plot p){
    try{
        Robot r = *this;
        cout << "*******************************************" << endl;
        notifyAll();
        cout << "Action : " << endl;
        cout << "\t RencontrerPlot" << endl;
	    etat = etat ->rencontrerPlot();
	    directionInit = direction;
	    plot = p;
        notifyAll();
        saveState.push_back(r);
        saveCommand.push_back(RENCONTRERPLOT);
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
}

void Robot::poser(){
    try{
        Robot r = *this;
        cout << "*******************************************" << endl;
        notifyAll();
        cout << "Action : " << endl;
        cout << "\t Poser" << endl;
	    etat = etat ->poser();
        notifyAll();
        saveState.push_back(r);
        saveCommand.push_back(POSER);
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
}


void Robot::tourner(string direction){

    try{
        Robot r = *this;
        cout << "*******************************************" << endl;
        notifyAll();
        cout << "Action : " << endl;
        cout << "\t Tourner" << endl;
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
        saveState.push_back(r);
        saveCommand.push_back(TOURNER);
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
}

void Robot::avancer(int x, int y){
    try{
        Robot r = *this;
        cout << "*******************************************" << endl;
        notifyAll();
        cout << "Action : " << endl;
        cout << "\t Avancer" << endl;
	    etat = etat ->avancer();
	    p.setX(x);
	    p.setY(y);
        notifyAll();
        saveState.push_back(r);
        saveCommand.push_back(AVANCER);
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
}

int Robot::evaluerPlot(){
    try{
        Robot r = *this;
        cout << "*******************************************" << endl;
        notifyAll();
        cout << "Action : " << endl;
        cout << "\t EvaluerPlot" << endl;
	    etat = etat ->evaluerPlot();
	    cout << "Hauteur du plot : " + std::to_string(plot.getHauteur()) << endl;
	    notifyAll();
	    saveState.push_back(r);
	    saveCommand.push_back(EVALUERPLOT);
	    return plot.getHauteur();
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
    return 0;
}

int Robot::peser(){
    try{
        Robot r = *this;
        cout << "*******************************************" << endl;
        notifyAll();
        cout << "Action : " << endl;
        cout << "\t Peser" << endl;
	    etat = etat ->peser();
	    cout << "Poids de l'objet : " + std::to_string(o.getPoids()) << endl;
	    notifyAll();
	    saveState.push_back(r);
	    saveCommand.push_back(PESER);
	    return o.getPoids();
    }catch(char const* ex){
        cout << "******* ERREUR : Action impossible dans cet état *******" << endl;
    }
    return 0;
}
