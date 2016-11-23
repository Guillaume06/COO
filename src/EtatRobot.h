#ifndef ETAT_ROBOT_H
#define ETAT_ROBOT_H
#include <string>
using namespace std;

class EtatRobot {
	private : 
		string name;
    public :
    	void setName(string s);
        EtatRobot();
        virtual EtatRobot* saisir()=0;
        virtual EtatRobot* fige()=0;
        string getName();
};

#endif