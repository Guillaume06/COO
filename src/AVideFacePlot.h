#include "EnRoute.h"
#ifndef AVIDEFACEPLOT_H
#define AVIDEFACEPLOT_H


class AVideFacePlot : public EnRoute{
    public :
        AVideFacePlot();

    private :
        static AVideFacePlot instance;

    public :
        static AVideFacePlot getInstance();

};

#endif