#include "Robot.h"
#include "EtatRobot.h"
#include "AVideFacePlot.h"
#include "Observateur.h"
#include "Textuel.h"
#include <iostream>
using namespace std;

int main(){
	Textuel text= Textuel();
	Observateur obs = Observateur(&text);
    Robot r = Robot(&obs);
    Objet o = Objet();
    r.afficherEtat();
    AVideFacePlot e = AVideFacePlot();
    r.setEtat(&e);
    r.afficherEtat();
    r.saisir(o);
    r.fige();
    r.repartir();

    return 0;
}
