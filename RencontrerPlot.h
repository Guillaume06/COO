#ifndef RENCONTRERPLOT_H
#define RENCONTRERPLOT_H
#include "Command_Robot.h"
#include "Plot.h"

using namespace std;

class RencontrerPlot : public Command_Robot{
    private :
        Plot plot;
    public :
        RencontrerPlot(Plot plot, Robot* r);
        void execute();
        void desexecute();
};


#endif