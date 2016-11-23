#include "AVide.h"
#include "EtatRobot.h"

AVide AVide::instance=AVide();

AVide& AVide::Instance(){
	return instance;
}

AVide::AVide(){
	this->setName("AVide");
}