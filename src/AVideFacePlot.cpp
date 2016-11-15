#include"AVideFacePlot.h"
#include "EtatRobot.h"
#include "EnRoute.h"

AVideFacePlot instance = *(new AVideFacePlot());
        static AVideFacePlot getInstance(){
            return instance;
        }
