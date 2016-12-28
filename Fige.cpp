#include "Fige.h"

Fige Fige::instance=Fige();

Fige& Fige::Instance(){
	return instance;
}
Fige::Fige(){
	this->setName("Fige");
}

