#include "Observateur.h"
#include "Robot.h"

Observateur::Observateur(Afficheur* aff){
	afficheur = aff;
}

void Observateur::notify(Robot* r){
	afficheur->notify(r);
}