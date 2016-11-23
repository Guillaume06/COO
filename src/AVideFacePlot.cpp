#include "AVideFacePlot.h"
#include "EnChargeFacePlot.h"
#include "Fige.h"



AVideFacePlot AVideFacePlot::instance=AVideFacePlot();

AVideFacePlot& AVideFacePlot::Instance(){
	return instance;
}


AVideFacePlot::AVideFacePlot(){
	this->setName("AVideFacePlot");
}
