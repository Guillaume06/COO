#ifndef TEXTUEL_H
#define TEXTUEL_H
#include "Robot.h"
#include "Afficheur.h"
#include <iostream>
#include <string>
class Textuel : public Afficheur{
	public : 
		Textuel();
		void notify(Robot* r){
			cout << "Affichage : " << endl;
			cout << "\t Etat : "+r->getEtat()->getName() << endl;
			cout << "\t Direction : "+r->getDirection() << endl;
			cout << "\t Direction Initiale : "+r->getDirectionInitiale() << endl;
			cout << "\t X : " + std::to_string(r->getX());
			cout << ", Y : " + std::to_string(r->getX()) << endl;
		}
};

#endif