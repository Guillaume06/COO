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

        EtatRobot* avancer(){return nullptr;};
        EtatRobot* tourner(){return nullptr;};
        EtatRobot* rencontrerPlot(){return nullptr;};
        EtatRobot* evaluerPlot(){return nullptr;};
        EtatRobot* poser(){return nullptr;};
        EtatRobot* peser(){return nullptr;};

        EtatRobot* saisir(){throw ("Action impossible dans cet état");};
        EtatRobot* figer(){throw ("Action impossible dans cet état");};
        EtatRobot* repartir(){return nullptr;};
        EtatRobot* changeStateMove(){throw ("Action impossible dans cet état");}
        EtatRobot* changeStateMoveToInit(){throw ("Action impossible dans cet état");}
};

#endif