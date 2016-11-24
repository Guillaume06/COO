#ifndef TEXTUEL_H
#define TEXTUEL_H
#include "Robot.h"
#include "Afficheur.h"
#include <iostream>
class Textuel : public Afficheur{
	public : 
		Textuel();
		void notify(Robot* r){
			cout << r->getEtat()->getName() << endl;
		}
};

#endif