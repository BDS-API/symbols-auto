#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class MelonFeature : Feature {

public:
    virtual ~MelonFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    MelonFeature();
};
