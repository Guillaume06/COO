
#ifndef ENCHARGEFACEPLOT_H
#define ENCHARGEFACEPLOT_H
#include "EtatRobot.h"
#include "Fige.h"

using namespace std;
class EnChargeFacePlot : public EtatRobot{
	private :
        static EnChargeFacePlot instance;

	public : 
		EnChargeFacePlot();
		static EnChargeFacePlot& Instance();
        EnChargeFacePlot& getInstance(){return instance;};

        EtatRobot* avancer()            {throw ("Action impossible dans cet état");};
        EtatRobot* tourner()            {return getEnChargeFacePlotInstance();};
        EtatRobot* rencontrerPlot()     {throw ("Action impossible dans cet état");};
        EtatRobot* evaluerPlot()        {return &EnChargeFacePlot::Instance();};
        EtatRobot* poser()              {return getAVideFacePlotInstance();};
        EtatRobot* peser()              {return &EnChargeFacePlot::Instance();};

        EtatRobot* saisir()             {throw ("Action ompossible dans cet état");};
        EtatRobot* figer()              {return &Fige::Instance();};
        EtatRobot* repartir()           {throw ("Action impossible dans cet état");};
        EtatRobot* changeStateMove()    {return getEnChargeInstance();}
        EtatRobot* changeStateMoveToInit(){return getEnChargeFacePlotInstance();}
};

#endif
