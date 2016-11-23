#ifndef ENCHARGEFACEPLOT_H
#define ENCHARGEFACEPLOT_H
#include "EtatRobot.h"
#include "Fige.h"

class EnChargeFacePlot : public EtatRobot{
	private :
        static EnChargeFacePlot instance;

	public : 
		EnChargeFacePlot();
		static EnChargeFacePlot& Instance();
        EtatRobot* saisir(){throw ("Action ompossible dans cet état");};
        EtatRobot* fige(){return &Fige::Instance();};
        EtatRobot* repartir(){throw ("Action impossible dans cet état");};
};

#endif
