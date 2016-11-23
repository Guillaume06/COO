#ifndef AVIDE_H
#define AVIDE_H
#include "EtatRobot.h"
#include "Objet.h"

class AVide : public EtatRobot{
	private :
        static AVide instance;

	public : 
		AVide();
		static AVide& Instance();
        EtatRobot* saisir(){return nullptr;};
        EtatRobot* fige(){return nullptr;};
        EtatRobot* repartir(){throw ("Action impossible dans cet état");};
};

#endif