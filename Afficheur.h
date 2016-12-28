#ifndef AFFICHEUR_H
#define AFFICHEUR_H
#include "Robot.h"

class Afficheur {
	public :
		Afficheur();
		virtual void notify(Robot* r)=0;
};

#endif