#include "Command.h"
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


Command* Command::returnCommand(CommandStruct c, Robot* r){
    switch(c.command){
        case AVANCER :
            return new Avancer(stoi(c.parameters[0]), stoi(c.parameters[1]), r);
            break;
        case TOURNER :
            return new Tourner(c.parameters[0], r);
            break;
        case RENCONTRERPLOT :
            return new RencontrerPlot(Plot(stoi(c.parameters[0])), r);
            break;
        case EVALUERPLOT :
            return new EvaluerPlot(r);
            break;
       case POSER :
            return new Poser(r);
            break;
       case SAISIR :
            return new Saisir(Objet(stoi(c.parameters[0])), r);
            break;
       case PESER  :
            return new Peser(r);
            break;
       case FIGER :
            return new Figer(r);
            break;
       case REPARTIR :
            return new Repartir(r);
            break;
       case DEFAIRE :
            return new Defaire(r);

        default :
            return nullptr;
            break;
    }
    return nullptr;
}