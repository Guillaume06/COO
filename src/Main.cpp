#include "Robot.h"
#include "EtatRobot.h"
#include "AVideFacePlot.h"
#include "Observateur.h"
#include <iostream>
using namespace std;

int main(){
	Observateur obs = Observateur();
    Robot r = Robot(&obs);
    Objet o = Objet();
    AVideFacePlot e = AVideFacePlot();

    r.setEtat(&e);
    r.saisir(o);


    r.fige();

    r.repartir();

    return 0;
}
