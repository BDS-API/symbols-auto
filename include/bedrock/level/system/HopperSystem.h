#pragma once

class HopperSystem : ITickingSystem {

public:
    virtual HopperSystem::~HopperSystem();
    virtual void tick(EntityRegistry &);

    HopperSystem(void);
};
