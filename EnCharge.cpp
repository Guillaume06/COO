#include "EnCharge.h"
#include "EtatRobot.h"

EnCharge EnCharge::instance=EnCharge();

EnCharge& EnCharge::Instance(){
	return instance;
}


EnCharge::EnCharge(){
	this->setName("EnCharge");
}

EtatRobot* EtatRobot::getEnChargeInstance(){
    return &EnCharge::Instance();
}