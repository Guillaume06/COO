#include "Avancer.h"

Avancer::Avancer(int x, int y, Robot* r){
    setRobot(r);
    this-> x = x;
    this-> y = y;
}

void Avancer::execute(){
    getRobot()->avancer(x, y);
}
void Avancer::desexecute(){
    Robot r = getRobot()->getRobot();
    getRobot()->avancer(r.getX(), r.getY());
    getRobot()->deleteCommand();
    getRobot()->deleteState();
}