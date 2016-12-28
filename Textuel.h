#ifndef TEXTUEL_H
#define TEXTUEL_H
#include "Robot.h"
#include "Afficheur.h"
#include <iostream>
class Textuel : public Afficheur{
	public : 
		Textuel();
		void notify(Robot* r){
			cout << "Affichage : " << endl;
			cout << "\tEtat : "+r->getEtat()->getName() << endl;
			cout << "\tDirection : "+r->getDirection() << endl;
			cout << "\tDirection Initiale : "+r->getDirectionInitiale() << endl;
		}
};

#endif