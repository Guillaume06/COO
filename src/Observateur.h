#ifndef OBSERVATEUR_H
#define OBSERVATEUR_H
#include "Afficheur.h"
class Robot;
class Observateur{
	private :
		Afficheur* afficheur;
    public :
        Observateur(Afficheur* aff);
        void notify(Robot* r);
};

#endif