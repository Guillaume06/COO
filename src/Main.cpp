#include "Robot.h"
#include "EtatRobot.h"
#include "AVideFacePlot.h"
#include "Observateur.h"
#include "Textuel.h"
#include <iostream>
using namespace std;

int main(){
	Textuel text= Textuel();
    vector<Observateur*> obsList;
	Observateur obs = Observateur(&text);
    obsList.push_back(&obs);
    Robot r = Robot(obsList);
    Objet o = Objet();
    AVideFacePlot e = AVideFacePlot();
    cout << "Etat mis manuellement à AVideFacePlot" << endl;
    r.setEtat(&e);
    r.saisir(o);
    r.fige();
    r.fige();
    r.repartir();

    return 0;
}
