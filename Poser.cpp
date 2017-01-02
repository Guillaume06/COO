#include "Poser.h"

Poser::Poser(Robot* r){
    setRobot(r);
}

void Poser::execute(){
    getRobot()->poser();
}

void Poser::desexecute(){
        Robot r = getRobot()->getRobot();
        getRobot()->saisir(r.getObjet());
}