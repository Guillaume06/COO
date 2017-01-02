#include "Repartir.h"

Repartir::Repartir(Robot* r){
    setRobot(r);
}

void Repartir::execute(){
    getRobot()->repartir();
}

void Repartir::desexecute(){
    Robot r = getRobot()->getRobot();
    getRobot()->figer();
    getRobot()->deleteCommand();
    getRobot()->deleteState();
}