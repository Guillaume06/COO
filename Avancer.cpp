#include "Avancer.h"

Avancer::Avancer(int x, int y, Robot* r){
    setRobot(r);
    this-> x = x;
    this-> y = y;
}

void Avancer::execute(){getRobot()->avancer(x, y);}
void Avancer::desexecute(){}