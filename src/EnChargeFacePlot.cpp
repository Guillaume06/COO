#include "EnChargeFacePlot.h"
#include "Fige.h"

EnChargeFacePlot EnChargeFacePlot::instance=EnChargeFacePlot();

EnChargeFacePlot& EnChargeFacePlot::Instance(){
	return instance;
}


EnChargeFacePlot::EnChargeFacePlot(){
	this->setName("EnChargeFacePlot");
}

