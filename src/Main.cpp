#include "Robot.h"
#include "EtatRobot.h"
#include "AVideFacePlot.h"
#include <iostream>
using namespace std;

int main(){
    Robot r = Robot();
    Objet o = Objet();
    AVideFacePlot e = AVideFacePlot();
    cout << r.getEtat()->getName() << endl;

    r.setEtat(&e);
    r.saisir(o);

    cout << r.getEtat()->getName() << endl;


    return 0;
}
