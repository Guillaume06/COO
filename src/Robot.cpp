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
Observateur::Observateur(){

}

void Observateur::notify(Robot* r){
	cout << r->getEtat()->getName() << endl;
}