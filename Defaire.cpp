#include "Defaire.h"
#include "Avancer.h"
#include "Tourner.h"
#include "RencontrerPlot.h"
#include "EvaluerPlot.h"
#include "Plot.h"
#include "Poser.h"
#include "Objet.h"
#include "Saisir.h"
#include "Peser.h"
#include "Figer.h"
#include "Repartir.h"
#include "Defaire.h"

Defaire::Defaire(Robot* r){
    setRobot(r);
}

void Defaire::execute(){
    cout << "*******************************************" << endl;
    cout << "DEFAIRE" << endl;
    if (getRobot()->getCommandSize() > 0){
        switch(getRobot()->getCommand()){
            case AVANCER :
                Avancer(0, 0, getRobot()).desexecute();
                break;
            case TOURNER :
                Tourner("", getRobot()).desexecute();
                break;
            case RENCONTRERPLOT :
                RencontrerPlot(Plot(), getRobot()).desexecute();
                break;
            case EVALUERPLOT :
                EvaluerPlot(getRobot()).desexecute();
                break;
           case POSER :
                Poser(getRobot()).desexecute();
                break;
           case SAISIR :
                Saisir(Objet(), getRobot()).desexecute();
                break;
           case PESER  :
                Peser(getRobot()).desexecute();
                break;
           case FIGER :
                Figer(getRobot()).desexecute();
                break;
           case REPARTIR :
                Repartir(getRobot()).desexecute();
                break;
           case DEFAIRE :
                Defaire(getRobot()).desexecute();

            default :
                break;
        }
      }else{
        cout << "Aucune commande à défaire" << endl;
      }
      cout << "*******************************************" << endl;


}
void Defaire::desexecute(){}