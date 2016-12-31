#ifndef EVALUERPLOT_H
#define EVALUERPLOT_H
#include "Command_Robot.h"

using namespace std;

class EvaluerPlot : public Command_Robot{
    public :
        EvaluerPlot(Robot* r);
        void execute();
        void desexecute();
};


#endif