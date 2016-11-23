#ifndef FIGE_H
#define FIGE_H
#include "EtatRobot.h"

class Fige : public EtatRobot{
	private :
        static Fige instance;

	public : 
		Fige();
		static Fige& Instance();
        EtatRobot* saisir(){throw ("Action impossible dans cet état");};
        EtatRobot* fige(){throw ("Action impossible dans cet état");};
};

#endif