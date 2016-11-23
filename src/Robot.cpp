#include "Robot.h"
#include "AVide.h"

Robot::Robot(){
	etat = &AVide::Instance();
}

void Robot::setEtat(EtatRobot* e){
	etat = e;
}

EtatRobot* Robot::getEtat(){
	return etat;
}