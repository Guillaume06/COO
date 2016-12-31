#include "Peser.h"

Peser::Peser(Robot* r){
    setRobot(r);
}

void Peser::execute(){
    getRobot()->peser();
}

void Peser::desexecute(){
}