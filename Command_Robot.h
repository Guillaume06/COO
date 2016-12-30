#ifndef COMMAND_ROBOT_H
#define COMMAND_ROBOT_H
#include "Command.h"
#include "Robot.h"

class Command_Robot : public Command {
    public :
        Command_Robot();
        void setRobot(Robot* r);
        Robot* getRobot(){return r;}
    private :
        Robot* r = nullptr;
};

#endif