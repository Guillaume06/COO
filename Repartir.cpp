#include "Repartir.h"

Repartir::Repartir(Robot* r){
    setRobot(r);
}

void Repartir::execute(){
    getRobot()->repartir();
}

void Repartir::desexecute(){
}