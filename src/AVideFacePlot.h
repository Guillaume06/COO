#ifndef AVIDEFACEPLOT_H
#define AVIDEFACEPLOT_H
#include "EtatRobot.h"
#include "EnChargeFacePlot.h"
#include "Fige.h"

class AVideFacePlot : public EtatRobot{
    private :
        static AVideFacePlot instance;

    public :
    	AVideFacePlot();
        static AVideFacePlot& Instance();
        EtatRobot* saisir(){return &EnChargeFacePlot::Instance();};
        EtatRobot* fige(){return &Fige::Instance();};

};

#endif