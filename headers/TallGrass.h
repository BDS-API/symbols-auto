#pragma once

class TallGrass : BushBlock {

    virtual void ~TallGrass();
    virtual void ~TallGrass();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void BlockLegacy::getStateFromLegacyData(unsigned short)const;
    virtual void BlockLegacy::getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void BlockLegacy::isObstructingChests(BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::randomlyModifyPosition(BlockPos const&, int &)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void BlockLegacy::addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void BlockLegacy::addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual void BlockLegacy::getOutline(BlockSource &, BlockPos const&, AABB &)const;
    virtual void BlockLegacy::getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual void BlockLegacy::onProjectileHit(BlockSource &, BlockPos const&, Actor const&)const;
    virtual void BlockLegacy::liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const& ()(BlockPos const&)> const&, BlockPos const&)const;
    virtual void BlockLegacy::getLightEmission(Block const&)const;
    virtual void BlockLegacy::shouldRandomTick(void)const;
    virtual void BlockLegacy::hasVariableLighting(void)const;
    virtual void BlockLegacy::isStrippable(Block const&)const;
    virtual void BlockLegacy::getStrippedBlock(Block const&)const;
    virtual void BlockLegacy::canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual void BlockLegacy::canConnect(Block const&, unsigned char, Block const&)const;
    virtual void BlockLegacy::getConnectedDirections(Block const&, BlockPos const&, BlockSource &, bool &, bool &, bool &, bool &)const;
    virtual void BlockLegacy::isCropBlock(void)const;
    virtual void BlockLegacy::isStemBlock(void)const;
    virtual void BlockLegacy::isContainerBlock(void)const;
    virtual void BlockLegacy::isCraftingBlock(void)const;
    virtual void BlockLegacy::isInteractiveBlock(void)const;
    virtual void BlockLegacy::isWaterBlocking(void)const;
    virtual void BlockLegacy::isHurtableBlock(void)const;
    virtual void BlockLegacy::isFenceBlock(void)const;
    virtual void BlockLegacy::isFenceGateBlock(void)const;
    virtual void BlockLegacy::isThinFenceBlock(void)const;
    virtual void BlockLegacy::isWallBlock(void)const;
    virtual void BlockLegacy::isStairBlock(void)const;
    virtual void BlockLegacy::isSlabBlock(void)const;
    virtual void BlockLegacy::isDoorBlock(void)const;
    virtual void BlockLegacy::isRailBlock(void)const;
    virtual void BlockLegacy::isButtonBlock(void)const;
    virtual void BlockLegacy::canHurtAndBreakItem(void)const;
    virtual void BlockLegacy::isSignalSource(void)const;
    virtual void BlockLegacy::canBeOriginalSurface(void)const;
    virtual void BlockLegacy::isValidAuxValue(int)const;
    virtual void BlockLegacy::canFillAtPos(BlockSource &, BlockPos const&, Block const&)const;
    virtual void BlockLegacy::sanitizeFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void BlockLegacy::onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void BlockLegacy::getDirectSignal(BlockSource &, BlockPos const&, int)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual void canContainLiquid(void)const;
    virtual void BlockLegacy::shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void BlockLegacy::handleRain(BlockSource &, BlockPos const&, float)const;
    virtual void BlockLegacy::canBeUsedInCommands(bool)const;
    virtual void BlockLegacy::getThickness(void)const;
    virtual void BlockLegacy::getFlexibility(BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void BlockLegacy::shouldDispense(BlockSource &, Container &)const;
    virtual void BlockLegacy::dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void BlockLegacy::onPlace(BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::onRemove(BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::onExploded(BlockSource &, BlockPos const&, Actor *)const;
    virtual void BlockLegacy::onStepOn(Actor &, BlockPos const&)const;
    virtual void BlockLegacy::onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void BlockLegacy::transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void BlockLegacy::onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void BlockLegacy::onMove(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void BlockLegacy::detachesOnPistonMove(BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::movedByPiston(BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::getRedstoneProperty(BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::updateEntityAfterFallOn(Actor &)const;
    virtual void BlockLegacy::isBounceBlock(void)const;
    virtual void BlockLegacy::ignoreEntitiesOnPistonMove(Block const&)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void BlockLegacy::mayPick(void)const;
    virtual void BlockLegacy::mayPick(BlockSource &, Block const&, bool)const;
    virtual void BlockLegacy::mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const;
    virtual void BlockLegacy::breaksFallingBlocks(Block const&)const;
    virtual void BlockLegacy::destroy(BlockSource &, BlockPos const&, Block const&, Actor *)const;
    virtual void BlockLegacy::playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void BlockLegacy::getIgnoresDestroyPermissions(Actor &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void BlockLegacy::getSecondPart(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void BlockLegacy::getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void BlockLegacy::asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void BlockLegacy::spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void BlockLegacy::spawnBurnResources(BlockSource &, float, float, float)const;
    virtual void BlockLegacy::getExplosionResistance(Actor *)const;
    virtual void BlockLegacy::clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
    virtual void BlockLegacy::use(Player &, BlockPos const&)const;
    virtual void BlockLegacy::getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void BlockLegacy::calcVariant(BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::isAttachedTo(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void BlockLegacy::attack(Player *, BlockPos const&)const;
    virtual void BlockLegacy::handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    virtual void BlockLegacy::entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void canSurvive(BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::getExperienceDrop(Random &)const;
    virtual void BlockLegacy::canBeBuiltOver(BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    virtual void BlockLegacy::executeEvent(BlockSource &, BlockPos const&, Block const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void BlockLegacy::hasTag(BlockSource &, BlockPos const&, Block const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void BlockLegacy::getMobToSpawn(SpawnConditions const&, BlockSource &)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::getMapColor(void)const;
    virtual void BlockLegacy::shouldStopFalling(Actor &)const;
    virtual void BlockLegacy::pushesUpFallingBlocks(void)const;
    virtual void BlockLegacy::calcGroundFriction(Mob &, BlockPos const&)const;
    virtual void BlockLegacy::canHaveExtraData(void)const;
    virtual void BlockLegacy::hasComparatorSignal(void)const;
    virtual void BlockLegacy::getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void BlockLegacy::canSlide(BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::getIconYOffset(void)const;
    virtual void getRenderLayer(void)const;
    virtual void _ZNK9TallGrass18buildDescriptionIdB5cxx11ERK5Block;
    virtual void BlockLegacy::isAuxValueRelevantForPicking(void)const;
    virtual void getColor(Block const&)const;
    virtual void BlockLegacy::getColorAtPos(BlockSource &, BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void BlockLegacy::getColorForParticle(BlockSource &, BlockPos const&, Block const&)const;
    virtual void BlockLegacy::isSeasonTinted(Block const&, BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::onGraphicsModeChanged(bool, bool, bool);
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::getExtraRenderLayers(void)const;
    virtual void BlockLegacy::getShadeBrightness(void)const;
    virtual void BlockLegacy::getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void BlockLegacy::getVisualShape(Block const&, AABB &, bool)const;
    virtual void BlockLegacy::getUIShape(Block const&, AABB &)const;
    virtual void BlockLegacy::telemetryVariant(BlockSource &, BlockPos const&)const;
    virtual void BlockLegacy::getVariant(Block const&)const;
    virtual void BlockLegacy::canSpawnOn(void)const;
    virtual void BlockLegacy::getMappedFace(unsigned char, Block const&)const;
    virtual void BlockLegacy::getFaceFlip(unsigned char, Block const&)const;
    virtual void BlockLegacy::animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void BlockLegacy::init(void);
    virtual void BlockLegacy::setLightBlock(Brightness);
    virtual void BlockLegacy::setLightEmission(float);
    virtual void BlockLegacy::setExplodeable(float);
    virtual void BlockLegacy::setDestroyTime(float);
    virtual void BlockLegacy::setFriction(float);
    virtual void BlockLegacy::addProperty(BlockProperty);
    virtual void BlockLegacy::addState(ItemState const&);
    virtual void BlockLegacy::addState(ItemState const&, unsigned long);
    virtual void BlockLegacy::setAllowsRunes(bool);
    virtual void BlockLegacy::setMapColor(Color const&);
    virtual void canBeSilkTouched(void)const;
    virtual void BlockLegacy::getSilkTouchItemInstance(Block const&)const;
    virtual void BlockLegacy::setVisualShape(AABB const&);
    virtual void BlockLegacy::setVisualShape(Vec3 const&, Vec3 const&);
    virtual void BlockLegacy::tryLegacyUpgrade(unsigned short)const;
    virtual void BlockLegacy::dealsContactDamage(Actor const&, Block const&, bool)const;
    virtual void checkAlive(BlockSource &, BlockPos const&)const;
}
