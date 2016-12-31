#include "Poser.h"

Poser::Poser(Robot* r){
    setRobot(r);
}

void Poser::execute(){
    getRobot()->poser();
}

void Poser::desexecute(){
}