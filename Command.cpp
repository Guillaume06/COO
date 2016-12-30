#include "Command.h"
#include "Avancer.h"


Command* Command::returnCommand(CommandStruct c, Robot* r){
    switch(c.command){
        case AVANCER :
            return new Avancer(c.parameters[0], c.parameters[1], r);
            break;
        default :
            return nullptr;
            break;
    }
    return nullptr;
}