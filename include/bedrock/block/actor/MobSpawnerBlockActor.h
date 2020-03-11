#pragma once

#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../unmapped/BlockSource.h"


class MobSpawnerBlockActor : BlockActor {

public:
    virtual ~MobSpawnerBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    MobSpawnerBlockActor(BlockPos const&);
    void getSpawner();
};
