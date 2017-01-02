#include "Saisir.h"

Saisir::Saisir(Objet o, Robot* r){
    this-> o = o;
    setRobot(r);
}

void Saisir::execute(){
    getRobot()->saisir(o);
}

void Saisir::desexecute(){
    Robot r = getRobot()->getRobot();
    getRobot()->poser();
}