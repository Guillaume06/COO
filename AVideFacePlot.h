#ifndef AVIDEFACEPLOT_H
#define AVIDEFACEPLOT_H
#include "EtatRobot.h"
#include "EnChargeFacePlot.h"
#include "Fige.h"

using namespace std;
class AVideFacePlot : public EtatRobot{
    private :
        static AVideFacePlot instance;

    public :
    	AVideFacePlot();
        static AVideFacePlot& Instance();

        EtatRobot* avancer()        {throw ("Action impossible dans cet état");};
        EtatRobot* tourner()        {return getAVideFacePlotInstance();};
        EtatRobot* rencontrerPlot() {throw ("Action impossible dans cet état");};
        EtatRobot* evaluerPlot()    {return &AVideFacePlot::Instance();};
        EtatRobot* poser()          {throw ("Action impossible dans cet état");};
        EtatRobot* peser()          {throw ("Action impossible dans cet état");};

        EtatRobot* saisir()         {return getEnChargeFacePlotInstance();};
        EtatRobot* figer()          {return &Fige::Instance();};
        EtatRobot* repartir()       {throw ("Action impossible dans cet état");};
        EtatRobot* changeStateMove(){return getAVideInstance();}
        EtatRobot* changeStateMoveToInit(){return getAVideFacePlotInstance();}


};


#endif