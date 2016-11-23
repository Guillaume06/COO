#include "Observateur.h"
#include "Robot.h"

Observateur::Observateur(){

}

void Observateur::notify(Robot* r){
	cout << r->getEtat()->getName() << endl;
}