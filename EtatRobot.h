#ifndef ETAT_ROBOT_H
#define ETAT_ROBOT_H
#include <string>


using namespace std;
class EtatRobot {
	private : 
		string name;
    public :

    	void setName(string s);
    	virtual EtatRobot* changeStateMoveToInit()=0;
    	virtual EtatRobot* changeStateMove()=0;
        EtatRobot();
        EtatRobot* getAVideInstance();
        EtatRobot* getAVideFacePlotInstance();
        EtatRobot* getEnChargeFacePlotInstance();
        EtatRobot* getEnChargeInstance();
        EtatRobot* getFigeInstance();
        EtatRobot* getRepartireInstance();
        virtual EtatRobot* saisir()=0;
        virtual EtatRobot* figer()=0;
        virtual EtatRobot* repartir()=0;
        virtual EtatRobot* avancer()=0;
        virtual EtatRobot* tourner()=0;
        virtual EtatRobot* rencontrerPlot()=0;
        virtual EtatRobot* evaluerPlot()=0;
        virtual EtatRobot* poser()=0;
        virtual EtatRobot* peser()=0;
        string getName();
};

#endif