#include "EvaluerPlot.h"

EvaluerPlot::EvaluerPlot(Robot* r){
    setRobot(r);
}

void EvaluerPlot::execute(){
    getRobot()->evaluerPlot();
}

void EvaluerPlot::desexecute(){
    getRobot()->deleteCommand();
    getRobot()->deleteState();
}