#pragma once

class BedBlockActor : BlockActor {

    virtual void Bed~BedBlockActor();
    virtual void Bed~BedBlockActor();
    virtual void Bedload(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void Bedsave(CompoundTag &)const;
    virtual void BedsaveItemInstanceData(CompoundTag &);
    virtual void saveBlockData(CompoundTag &, BlockSource &)const;
    virtual void loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void Bedtick(BlockSource &);
    virtual void isFinished(void);
    virtual void BedonChanged(BlockSource &);
    virtual void isMovable(BlockSource &);
    virtual void isCustomNameSaved(void);
    virtual void BedgetUpdatePacket(BlockSource &);
    virtual void BedonPlace(BlockSource &);
    virtual void BedonUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void onMove(void);
    virtual void onRemoved(BlockSource &);
    virtual void triggerEvent(int, int);
    virtual void clearCache(void);
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void hasAlphaLayer(void)const;
    virtual void BedgetCrackEntity(BlockSource &, BlockPos const&);
    virtual void getDebugText(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &, BlockPos const&);
    virtual void _ZNK10BlockActor13getCustomNameB5cxx11Ev;
    virtual void _ZN10BlockActor21getFilteredCustomNameB5cxx11ERK18UIProfanityContext;
    virtual void _ZNK13BedBlockActor7getNameB5cxx11Ev;
    virtual void _ZN10BlockActor22getImmersiveReaderTextB5cxx11ER11BlockSource;
    virtual void getRepairCost(void)const;
    virtual void getOwningPiston(BlockSource &);
    virtual void getContainer(void);
    virtual void getDeletionDelayTimeSeconds(void)const;
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);
}
