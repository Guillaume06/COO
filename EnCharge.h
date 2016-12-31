#ifndef ENCHARGE_H
#define ENCHARGE_H
#include "EnRoute.h"
#include "EnChargeFacePlot.h"
#include "AVideFacePlot.h"

using namespace std;
class EnCharge : public EnRoute{
    private :
        static EnCharge instance;

	public :
		EnCharge();
		static EnCharge& Instance();

        EtatRobot* avancer()            {return &EnCharge::Instance();};
        EtatRobot* tourner()            {return &EnCharge::Instance();};
        EtatRobot* rencontrerPlot()     {return getEnChargeFacePlotInstance();};
        EtatRobot* evaluerPlot()        {throw ("Action ompossible dans cet état");};
        EtatRobot* poser()              {throw ("Action ompossible dans cet état");};
        EtatRobot* peser()              {return &EnCharge::Instance();};

        EtatRobot* saisir()             {throw ("Action ompossible dans cet état");};
        EtatRobot* figer()              {return &Fige::Instance();};
        EtatRobot* repartir()           {throw ("Action impossible dans cet état");};
        EtatRobot* changeStateMove(){return getEnChargeInstance();}
        EtatRobot* changeStateMoveToInit(){return getEnChargeFacePlotInstance();}
};

#endif
