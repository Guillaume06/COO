#include "Figer.h"

Figer::Figer(Robot* r){
    setRobot(r);
}

void Figer::execute(){
    getRobot()->figer();
}

void Figer::desexecute(){
    Robot r = getRobot()->getRobot();
    getRobot()->repartir();
}