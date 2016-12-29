#include "Robot.h"
#include "EtatRobot.h"
#include "AVideFacePlot.h"
#include "Observateur.h"
#include "Textuel.h"
#include "Plot.h"
#include <iostream>
using namespace std;

int main(){
    Plot p = Plot(10);
	Textuel text= Textuel();
    vector<Observateur*> obsList;
	Observateur obs = Observateur(&text);
    obsList.push_back(&obs);
    Robot r = Robot(obsList);
    r.notifyAll();
    Objet o = Objet(10);
    r.avancer(1, 1);
    r.rencontrerPlot(p);
    r.evaluerPlot();
    r.saisir(o);
    r.peser();
    r.tourner("Gauche");
    r.rencontrerPlot(p);
    r.poser();
    r.tourner("Droite");

    return 0;
}
