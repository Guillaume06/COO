#ifndef AVIDE_H
#define AVIDE_H
#include "EtatRobot.h"
#include "Objet.h"
#include "AVideFacePlot.h"

using namespace std;
class AVide : public EtatRobot{
	private :
        static AVide instance;

	public :
		AVide();
		static AVide& Instance();
        EtatRobot* saisir()         {throw ("Action impossible dans cet état");};
        EtatRobot* figer()          {return &Fige::Instance();};
        EtatRobot* repartir()       {throw ("Action impossible dans cet état");};
        EtatRobot* avancer()        {return &AVide::Instance();};
        EtatRobot* tourner()        {return &AVide::Instance();};
        EtatRobot* rencontrerPlot() {return &AVideFacePlot::Instance();};
        EtatRobot* evaluerPlot()    {throw ("Action impossible dans cet état");};
        EtatRobot* poser()          {throw ("Action impossible dans cet état");};
        EtatRobot* peser()          {throw ("Action impossible dans cet état");};
        EtatRobot* changeStateMove(){return getAVideInstance();}
        EtatRobot* changeStateMoveToInit(){return getAVideInstance();}
};

#endif