#pragma once

class SmokerBlockActor : FurnaceBlockActor {

public:
    virtual SmokerBlockActor::~SmokerBlockActor();
    virtual void getName[abi:cxx11](void)const;

    SmokerBlockActor(BlockPos const&);
};
