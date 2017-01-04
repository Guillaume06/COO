#include "RencontrerPlot.h"
#include "AVide.h"

RencontrerPlot::RencontrerPlot(Plot plot, Robot* r){
    setRobot(r);
    this->plot = plot;
}

void RencontrerPlot::execute(){
    getRobot()->rencontrerPlot(plot);
}

void RencontrerPlot::desexecute(){
    Robot r = getRobot()->getRobot();
    getRobot()->setEtat(r.getEtat());
    getRobot()->setDirectionInit(r.getDirectionInit());
    getRobot()->deleteCommand();
    getRobot()->deleteState();
}
