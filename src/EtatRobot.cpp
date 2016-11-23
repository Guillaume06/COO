#include "EtatRobot.h"

EtatRobot::EtatRobot(){
	this->setName("EtatRobot");
}

string EtatRobot::getName(){
	return name;
}

void EtatRobot::setName(string s){
	name = s;
}
