#ifndef FIGE_H
#define FIGE_H
#include "EtatRobot.h"
#include <string>

class Fige : public EtatRobot{
	private :
        static Fige instance;

	public : 
		Fige();
		static Fige& Instance();

        EtatRobot* avancer(){throw ("Action impossible dans cet état");};
        EtatRobot* tourner(){throw ("Action impossible dans cet état");};
        EtatRobot* rencontrerPlot(){throw ("Action impossible dans cet état");};
        EtatRobot* evaluerPlot(){throw ("Action impossible dans cet état");};
        EtatRobot* poser(){throw ("Action impossible dans cet état");};
        EtatRobot* peser(){throw ("Action impossible dans cet état");};
        EtatRobot* saisir(){throw ("Action impossible dans cet état");};
        EtatRobot* figer(){throw ("Action impossible dans cet état");};
        EtatRobot* repartir(){return &Fige::Instance();};
        EtatRobot* changeStateMove()    {return getFigeInstance();}
        EtatRobot* changeStateMoveToInit(){return getFigeInstance();}
};

#endif