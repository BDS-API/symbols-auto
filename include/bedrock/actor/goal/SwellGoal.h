#pragma once

#include "./Goal.h"
#include "../Creeper.h"
#include <string>


class SwellGoal : Goal {

public:
    virtual ~SwellGoal();
    virtual bool canUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SwellGoal(Creeper *, float, float);
};
