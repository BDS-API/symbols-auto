#pragma once

class RandomizableBlockActorFillingContainer : RandomizableBlockActorContainerBase, FillingContainer {

    virtual void RandomizableBlockActor~RandomizableBlockActorFillingContainer();
    virtual void RandomizableBlockActor~RandomizableBlockActorFillingContainer();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void BlockActor::saveItemInstanceData(CompoundTag &);
    virtual void BlockActor::saveBlockData(CompoundTag &, BlockSource &)const;
    virtual void BlockActor::loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual void BlockActor::onCustomTagLoadDone(BlockSource &);
    virtual void BlockActor::tick(BlockSource &);
    virtual void BlockActor::isFinished(void);
    virtual void BlockActor::onChanged(BlockSource &);
    virtual void BlockActor::isMovable(BlockSource &);
    virtual void BlockActor::isCustomNameSaved(void);
    virtual void BlockActor::getUpdatePacket(BlockSource &);
    virtual void BlockActor::onPlace(BlockSource &);
    virtual void BlockActor::onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void BlockActor::onMove(void);
    virtual void BlockActor::onRemoved(BlockSource &);
    virtual void BlockActor::triggerEvent(int, int);
    virtual void BlockActor::clearCache(void);
    virtual void BlockActor::onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void BlockActor::getShadowRadius(BlockSource &)const;
    virtual void BlockActor::hasAlphaLayer(void)const;
    virtual void BlockActor::getCrackEntity(BlockSource &, BlockPos const&);
    virtual void BlockActor::getDebugText(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &, BlockPos const&);
    virtual void _ZNK10BlockActor13getCustomNameB5cxx11Ev;
    virtual void _ZN10BlockActor21getFilteredCustomNameB5cxx11ERK18UIProfanityContext;
    virtual void _ZNK10BlockActor7getNameB5cxx11Ev;
    virtual void _ZN10BlockActor22getImmersiveReaderTextB5cxx11ER11BlockSource;
    virtual void BlockActor::getRepairCost(void)const;
    virtual void BlockActor::getOwningPiston(BlockSource &);
    virtual void BlockActor::getContainer(void);
    virtual void BlockActor::getDeletionDelayTimeSeconds(void)const;
    virtual void BlockActor::onChunkLoaded(LevelChunk &);
    virtual void BlockActor::onChunkUnloaded(LevelChunk &);
    virtual void RandomizableBlockActorstartOpen(Player &);
    virtual void RandomizableBlockActordropContents(BlockSource &, Vec3 const&, bool);
    virtual void ;
    virtual void `non-virtual thunk to'RandomizableBlockActor~RandomizableBlockActorFillingContainer();
    virtual void `non-virtual thunk to'RandomizableBlockActor~RandomizableBlockActorFillingContainer();
    virtual void Container::init(void);
    virtual void Container::addContentChangeListener(ContainerContentChangeListener *);
    virtual void Container::removeContentChangeListener(ContainerContentChangeListener *);
    virtual void getItem(int)const;
    virtual void Container::hasRoomForItem(ItemStack const&);
    virtual void Container::addItem(ItemStack &);
    virtual void Container::addItemToFirstEmptySlot(ItemStack &);
    virtual void setItem(int, ItemStack const&);
    virtual void removeItem(int, int);
    virtual void Container::removeAllItems(void);
    virtual void `non-virtual thunk to'RandomizableBlockActordropContents(BlockSource &, Vec3 const&, bool);
    virtual void getContainerSize(void)const;
    virtual void getMaxStackSize(void)const;
    virtual void `non-virtual thunk to'RandomizableBlockActorstartOpen(Player &);
    virtual void stopOpen(Player &);
    virtual void Container::getSlotCopies(void)const;
    virtual void Container::getSlots(void)const;
    virtual void getItemCount(ItemDescriptor const&);
    virtual void Container::getItemCount(ItemStack const&);
    virtual void Container::findFirstSlotForItem(ItemStack const&)const;
    virtual void Container::canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void Container::canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void Container::setContainerChanged(int);
    virtual void Container::setContainerMoved(void);
    virtual void Container::setCustomName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void Container::hasCustomName(void)const;
    virtual void Container::readAdditionalSaveData(CompoundTag const&);
    virtual void Container::addAdditionalSaveData(CompoundTag &);
    virtual void Container::createTransactionContext(std::function<void ()(Container&, int, ItemStack const&, ItemStack const&)>, std::function<void ()(void)>);
    virtual void Container::triggerTransactionChange(int, ItemStack const&, ItemStack const&);
    virtual void add(ItemStack &);
    virtual void canAdd(ItemStack const&)const;
    virtual void dropAll(bool);
    virtual void clearSlot(int);
    virtual void clearInventory(int);
    virtual void load(ListTag const&, SemVersion const&, Level &);
    virtual void doDrop(ItemStack &, bool);
    virtual void getEmptySlotsCount(void)const;
}
