#include "Robot.h"
#include "EtatRobot.h"
#include "AVideFacePlot.h"
#include "Observateur.h"
#include "Textuel.h"
#include "Plot.h"
#include "Parser.h"
#include <iostream>
using namespace std;

int main(){
	Textuel text= Textuel();
    vector<Observateur*> obsList;
	Observateur obs = Observateur(&text);
    obsList.push_back(&obs);
    Parser parser("Data.txt", obsList);
    parser.printCommands();
    parser.start();

    return 0;
}
