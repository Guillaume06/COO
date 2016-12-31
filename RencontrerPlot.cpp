#include "RencontrerPlot.h"

RencontrerPlot::RencontrerPlot(Plot plot, Robot* r){
    setRobot(r);
    this->plot = plot;
}

void RencontrerPlot::execute(){
    getRobot()->rencontrerPlot(plot);
}

void RencontrerPlot::desexecute(){
}