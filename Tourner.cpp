#include "Tourner.h"

Tourner::Tourner(string direction, Robot* r){
    setRobot(r);
    this->direction = direction;
}

void Tourner::execute(){
    getRobot()->tourner(direction);
}

void Tourner::desexecute(){
    Robot r = getRobot()->getRobot();
    getRobot()->tourner(r.getDirection());
}