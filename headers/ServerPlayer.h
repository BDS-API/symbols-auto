#pragma once

class ServerPlayer : Player {

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void Mob::reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual void ServerinitializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual void Actor::reloadComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual void Mob::hasComponent(Util::HashString const&)const;
    virtual void Server~ServerPlayer();
    virtual void Server~ServerPlayer();
    virtual void Actor::reset(void);
    virtual void Actor::getOnDeathExperience(void);
    virtual void Actor::getOwnerEntityType(void);
    virtual void remove(void);
    virtual void Actor::setPos(Vec3 const&);
    virtual void Actor::getPos(void)const;
    virtual void Actor::getPosOld(void)const;
    virtual void Actor::getPosExtrapolated(float)const;
    virtual void getAttachPos(ActorLocation, float)const;
    virtual void Actor::getFiringPos(void)const;
    virtual void Actor::setRot(Vec2 const&);
    virtual void move(Vec3 const&);
    virtual void Actor::getInterpolatedRidingPosition(float)const;
    virtual void Mob::getInterpolatedBodyRot(float)const;
    virtual void Mob::getInterpolatedHeadRot(float)const;
    virtual void Mob::getInterpolatedBodyYaw(float)const;
    virtual void Mob::getYawSpeedInDegreesPerSecond(void)const;
    virtual void Actor::getInterpolatedWalkAnimSpeed(float)const;
    virtual void Actor::getInterpolatedRidingOffset(float)const;
    virtual void Actor::checkBlockCollisions(AABB const&);
    virtual void Actor::checkBlockCollisions(void);
    virtual void Actor::breaksFallingBlocks(void)const;
    virtual void Mob::blockedByShield(ActorDamageSource const&, Actor &);
    virtual void Actor::moveRelative(float, float, float, float);
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void Actor::tryTeleportTo(Vec3 const&, bool, bool, int, int);
    virtual void Actor::chorusFruitTeleport(Vec3 &);
    virtual void Mob::lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void Actor::lerpMotion(Vec3 const&);
    virtual void getAddPacket(void);
    virtual void ServernormalTick(void);
    virtual void Mob::baseTick(void);
    virtual void rideTick(void);
    virtual void Actor::positionRider(Actor&, float);
    virtual void getRidingHeight(void);
    virtual void Mob::startRiding(Actor &);
    virtual void Mob::addRider(Actor &);
    virtual void Actor::flagRiderToRemove(Actor&);
    virtual void Actor::getExitTip(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, InputMode)const;
    virtual void Actor::intersects(Vec3 const&, Vec3 const&)const;
    virtual void Actor::isFree(Vec3 const&, float);
    virtual void Actor::isFree(Vec3 const&);
    virtual void Actor::isInWall(void)const;
    virtual void Actor::isInvisible(void)const;
    virtual void Actor::canShowNameTag(void)const;
    virtual void Actor::canExistInPeaceful(void)const;
    virtual void Actor::setNameTagVisible(bool);
    virtual void _ZNK5Actor10getNameTagB5cxx11Ev;
    virtual void Actor::getNameTagAsHash(void)const;
    virtual void _ZNK6Player19getFormattedNameTagB5cxx11Ev;
    virtual void Actor::filterFormattedNameTag(UIProfanityContext const&);
    virtual void Actor::setNameTag(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void getAlwaysShowNameTag(void)const;
    virtual void Actor::setScoreTag(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void _ZNK5Actor11getScoreTagB5cxx11Ev;
    virtual void Actor::isInWater(void)const;
    virtual void Actor::hasEnteredWater(void)const;
    virtual void Actor::isImmersedInWater(void)const;
    virtual void Actor::isInWaterOrRain(void)const;
    virtual void Actor::isInLava(void)const;
    virtual void Actor::isUnderLiquid(MaterialType)const;
    virtual void Actor::isOverWater(void)const;
    virtual void Actor::makeStuckInBlock(float);
    virtual void getCameraOffset(void)const;
    virtual void Actor::getShadowHeightOffs(void);
    virtual void Actor::getShadowRadius(void)const;
    virtual void Actor::getHeadLookVector(float);
    virtual void Actor::canSeeInvisible(void)const;
    virtual void Actor::canSee(Actor const&)const;
    virtual void Actor::canSee(Vec3 const&)const;
    virtual void Actor::isSkyLit(float);
    virtual void Actor::getBrightness(float)const;
    virtual void Actor::interactPreventDefault(void);
    virtual void Mob::playerTouch(Player &);
    virtual void Actor::onAboveBubbleColumn(bool);
    virtual void Actor::onInsideBubbleColumn(bool);
    virtual void isImmobile(void)const;
    virtual void Actor::isSilent(void);
    virtual void Mob::isPickable(void);
    virtual void Actor::isFishable(void)const;
    virtual void isSleeping(void)const;
    virtual void isShootable(void);
    virtual void Actor::isSneaking(void)const;
    virtual void Actor::setSneaking(bool);
    virtual void isBlocking(void)const;
    virtual void isDamageBlocked(ActorDamageSource const&)const;
    virtual void Mob::isAlive(void)const;
    virtual void Actor::isOnFire(void)const;
    virtual void Actor::isOnHotBlock(void)const;
    virtual void isCreativeModeAllowed(void);
    virtual void Mob::isSurfaceMob(void)const;
    virtual void Actor::isTargetable(void)const;
    virtual void Actor::canAttack(Actor*, bool)const;
    virtual void Mob::setTarget(Actor *);
    virtual void Actor::findAttackTarget(void);
    virtual void ServerisValidTarget(Actor *)const;
    virtual void attack(Actor &);
    virtual void Actor::performRangedAttack(Actor&, float);
    virtual void adjustDamageAmount(int &)const;
    virtual void Actor::getEquipmentCount(void)const;
    virtual void Actor::setOwner(ActorUniqueID);
    virtual void Actor::setSitting(bool);
    virtual void Actor::onTame(void);
    virtual void Actor::onFailedTame(void);
    virtual void Actor::getInventorySize(void)const;
    virtual void Actor::getEquipSlots(void)const;
    virtual void Actor::getChestSlots(void)const;
    virtual void Actor::setStanding(bool);
    virtual void Mob::canPowerJump(void)const;
    virtual void Actor::setCanPowerJump(bool);
    virtual void isJumping(void)const;
    virtual void Actor::isEnchanted(void)const;
    virtual void Actor::rideJumped(void);
    virtual void Actor::rideLanded(Vec3 const&, Vec3 const&);
    virtual void Actor::shouldRender(void)const;
    virtual void isInvulnerableTo(ActorDamageSource const&)const;
    virtual void actuallyHurt(int, ActorDamageSource const*, bool);
    virtual void Mob::animateHurt(void);
    virtual void Mob::doFireHurt(int);
    virtual void Actor::onLightningHit(void);
    virtual void onBounceStarted(BlockPos const&, Block const&);
    virtual void feed(int);
    virtual void ServerhandleEntityEvent(ActorEvent, int);
    virtual void Actor::getPickRadius(void);
    virtual void Actor::spawnAtLocation(int, int);
    virtual void Actor::spawnAtLocation(int, int, float);
    virtual void Actor::spawnAtLocation(Block const&, int);
    virtual void Actor::spawnAtLocation(Block const&, int, float);
    virtual void Actor::spawnAtLocation(ItemStack const&, float);
    virtual void Actor::despawn(void);
    virtual void Actor::killed(Actor&);
    virtual void awardKillScore(Actor &, int);
    virtual void ServersetArmor(ArmorSlot, ItemStack const&);
    virtual void Actor::getArmor(ArmorSlot)const;
    virtual void Mob::getArmorMaterialTypeInSlot(ArmorSlot)const;
    virtual void Mob::getArmorMaterialTextureTypeInSlot(ArmorSlot)const;
    virtual void Mob::getArmorColorInSlot(ArmorSlot, int)const;
    virtual void Mob::setEquippedSlot(ArmorSlot, int, int);
    virtual void Mob::setEquippedSlot(ArmorSlot, ItemStack const&);
    virtual void getCarriedItem(void)const;
    virtual void setCarriedItem(ItemStack const&);
    virtual void setOffhandSlot(ItemStack const&);
    virtual void getEquippedTotem(void)const;
    virtual void consumeTotem(void);
    virtual void Actor::save(CompoundTag &);
    virtual void Actor::saveWithoutId(CompoundTag &);
    virtual void Serverload(CompoundTag const&, DataLoadHelper &);
    virtual void Actor::loadLinks(CompoundTag const&, std::vector<ActorLink, std::allocator<ActorLink>> &, DataLoadHelper &);
    virtual void getEntityTypeId(void)const;
    virtual void Actor::queryEntityRenderer(void)const;
    virtual void Actor::getSourceUniqueID(void)const;
    virtual void Mob::setOnFire(int);
    virtual void Actor::getHandleWaterAABB(void)const;
    virtual void Actor::handleInsidePortal(BlockPos const&);
    virtual void getPortalCooldown(void)const;
    virtual void getPortalWaitTime(void)const;
    virtual void Actor::getDimensionId(void)const;
    virtual void ServercanChangeDimensions(void)const;
    virtual void ServerchangeDimension(AutomaticID<Dimension, int>, bool);
    virtual void Actor::changeDimension(ChangeDimensionPacket const&);
    virtual void ServergetControllingPlayer(void)const;
    virtual void ServercheckFallDamage(float, bool);
    virtual void Mob::causeFallDamage(float);
    virtual void ServerhandleFallDistanceOnServer(float, bool);
    virtual void Actor::playSynchronizedSound(LevelSoundEvent, Vec3 const&, Block const&, bool);
    virtual void Actor::playSynchronizedSound(LevelSoundEvent, Vec3 const&, int, bool);
    virtual void onSynchedDataUpdate(int);
    virtual void canAddRider(Actor &)const;
    virtual void canBePulledIntoVehicle(void)const;
    virtual void Mob::inCaravan(void)const;
    virtual void Actor::isLeashableType(void);
    virtual void Actor::tickLeash(void);
    virtual void sendMotionPacketIfNeeded(void);
    virtual void Actor::canSynchronizeNewEntity(void)const;
    virtual void Mob::stopRiding(bool, bool, bool);
    virtual void startSwimming(void);
    virtual void stopSwimming(void);
    virtual void Mob::buildDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void getCommandPermissionLevel(void)const;
    virtual void Actor::getMutableAttribute(Attribute const&);
    virtual void Actor::getAttribute(Attribute const&)const;
    virtual void Mob::getDeathTime(void)const;
    virtual void Actor::heal(int);
    virtual void Actor::isInvertedHealAndHarm(void)const;
    virtual void Actor::canBeAffected(int)const;
    virtual void Actor::canBeAffected(MobEffectInstance const&)const;
    virtual void Actor::canBeAffectedByArrow(MobEffectInstance const&)const;
    virtual void ServeronEffectAdded(MobEffectInstance &);
    virtual void ServeronEffectUpdated(MobEffectInstance const&);
    virtual void ServeronEffectRemoved(MobEffectInstance &);
    virtual void getAnimationComponent(void);
    virtual void Actor::openContainerComponent(Player &);
    virtual void Mob::swing(void);
    virtual void useItem(ItemStack &, ItemUseMethod, bool);
    virtual void Actor::hasOutputSignal(unsigned char)const;
    virtual void Actor::getOutputSignal(void)const;
    virtual void Actor::getDebugText(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &);
    virtual void getMapDecorationRotation(void)const;
    virtual void Actor::getRiderYRotation(Actor const&)const;
    virtual void Mob::getYHeadRot(void)const;
    virtual void isWorldBuilder(void);
    virtual void isCreative(void)const;
    virtual void isAdventure(void)const;
    virtual void add(ItemStack &);
    virtual void drop(ItemStack const&, bool);
    virtual void Actor::getInteraction(Player &, ActorInteraction &, Vec3 const&);
    virtual void Actor::canDestroyBlock(Block const&)const;
    virtual void Actor::setAuxValue(int);
    virtual void Actor::setSize(float, float);
    virtual void Actor::getLifeSpan(void)const;
    virtual void Actor::onOrphan(void);
    virtual void Actor::wobble(void);
    virtual void Actor::wasHurt(void);
    virtual void startSpinAttack(void);
    virtual void stopSpinAttack(void);
    virtual void Actor::setDamageNearbyMobs(bool);
    virtual void Mob::renderDebugServerState(Options const&);
    virtual void Actor::reloadLootTable(void);
    virtual void Actor::reloadLootTable(EquipmentTableDescription const*);
    virtual void Actor::getDeletionDelayTimeSeconds(void)const;
    virtual void Mob::kill(void);
    virtual void Serverdie(ActorDamageSource const&);
    virtual void Actor::shouldTick(void)const;
    virtual void Mob::updateEntitySpecificMolangVariables(RenderParams &);
    virtual void Actor::canMakeStepSound(void)const;
    virtual void Mob::outOfWorld(void);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void Actor::markHurt(void);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void Mob::_playStepSound(BlockPos const&, Block const&);
    virtual void Actor::_playFlySound(BlockPos const&, Block const&);
    virtual void Actor::_makeFlySound(void)const;
    virtual void Actor::checkInsideBlocks(float);
    virtual void Actor::pushOutOfBlocks(Vec3 const&);
    virtual void Actor::updateWaterState(void);
    virtual void Actor::doWaterSplashEffect(void);
    virtual void Actor::spawnTrailBubbles(void);
    virtual void Actor::updateInsideBlock(void);
    virtual void Actor::getLootTable(void);
    virtual void Actor::getDefaultLootTable(void);
    virtual void Mob::_removeRider(ActorUniqueID const&, bool, bool);
    virtual void _onSizeUpdated(void);
    virtual void Actor::_doAutoAttackOnTouch(Actor&);
    virtual void Serverknockback(Actor *, int, float, float, float, float, float);
    virtual void Mob::resolveDeathLoot(int, ActorDamageSource const&);
    virtual void Mob::spawnAnim(void);
    virtual void setSleeping(bool);
    virtual void Mob::isSprinting(void)const;
    virtual void Mob::setSprinting(bool);
    virtual void Mob::playAmbientSound(void);
    virtual void Mob::getAmbientSound(void);
    virtual void Mob::getAmbientSoundPostponeTicks(void);
    virtual void Mob::getItemInHandIcon(ItemStack const&, int);
    virtual void getSpeed(void)const;
    virtual void setSpeed(float);
    virtual void Mob::getJumpPower(void)const;
    virtual void Mob::hurtEffects(ActorDamageSource const&, int, bool, bool);
    virtual void Mob::getMeleeWeaponDamageBonus(Mob*);
    virtual void Mob::getMeleeKnockbackBonus(void);
    virtual void travel(float, float, float);
    virtual void Mob::applyFinalFriction(float, bool);
    virtual void Mob::updateWalkAnim(void);
    virtual void ServeraiStep(void);
    virtual void Mob::pushActors(void);
    virtual void Mob::lookAt(Actor *, float, float);
    virtual void Mob::isLookingAtAnEntity(void);
    virtual void Mob::checkSpawnRules(bool);
    virtual void Mob::checkSpawnObstruction(void)const;
    virtual void Mob::shouldDespawn(void)const;
    virtual void Mob::getAttackAnim(float);
    virtual void getItemUseDuration(void);
    virtual void getItemUseStartupProgress(void);
    virtual void getItemUseIntervalProgress(void);
    virtual void Mob::getItemuseIntervalAxis(void);
    virtual void Mob::getTimeAlongSwing(void);
    virtual void Mob::ate(void);
    virtual void Mob::getMaxHeadXRot(void);
    virtual void Mob::getLastHurtByMob(void);
    virtual void Mob::setLastHurtByMob(Mob*);
    virtual void Mob::getLastHurtByPlayer(void);
    virtual void Mob::setLastHurtByPlayer(Player *);
    virtual void Mob::getLastHurtMob(void);
    virtual void Mob::setLastHurtMob(Actor *);
    virtual void Mob::isAlliedTo(Mob*);
    virtual void Mob::doHurtTarget(Actor *);
    virtual void Mob::canBeControlledByRider(void);
    virtual void Mob::leaveCaravan(void);
    virtual void Mob::joinCaravan(Mob*);
    virtual void Mob::hasCaravanTail(void)const;
    virtual void Mob::getCaravanHead(void)const;
    virtual void Mob::getArmorValue(void);
    virtual void Mob::getArmorCoverPercentage(void)const;
    virtual void ServerhurtArmor(int);
    virtual void Mob::containerChanged(int);
    virtual void Mob::updateEquipment(void);
    virtual void Mob::clearEquipment(void);
    virtual void Mob::getAllArmor(void)const;
    virtual void Mob::getAllArmorID(void)const;
    virtual void getAllHand(void)const;
    virtual void getAllEquipment(void)const;
    virtual void Mob::getArmorTypeHash(void);
    virtual void ServersendInventory(bool);
    virtual void Mob::sendArmor(void);
    virtual void Mob::getDamageAfterMagicAbsorb(ActorDamageSource const&, int);
    virtual void Mob::createAIGoals(void);
    virtual void Mob::onBorn(Actor &, Actor &);
    virtual void Mob::setItemSlot(EquipmentSlot, ItemStack const&);
    virtual void Mob::goDownInWater(void);
    virtual void Mob::setTransitioningSitting(bool);
    virtual void Mob::attackAnimation(Actor *, float);
    virtual void Mob::getAttackTime(void);
    virtual void Mob::_getWalkTargetValue(BlockPos const&);
    virtual void canExistWhenDisallowMob(void)const;
    virtual void useNewAi(void)const;
    virtual void Mob::ascendLadder(void);
    virtual void Mob::ascendScaffolding(void);
    virtual void Mob::descendScaffolding(void);
    virtual void initBodyControl(void);
    virtual void jumpFromGround(void);
    virtual void updateAi(void);
    virtual void Mob::newServerAiStep(void);
    virtual void Mob::_serverAiMobStep(void);
    virtual void Mob::getDamageAfterEnchantReduction(ActorDamageSource const&, int);
    virtual void Mob::getDamageAfterArmorAbsorb(ActorDamageSource const&, int);
    virtual void dropEquipment(ActorDamageSource const&, int);
    virtual void dropEquipment(void);
    virtual void Mob::dropBags(void);
    virtual void Mob::dropContainer(void);
    virtual void Mob::tickDeath(void);
    virtual void Mob::_endJump(void);
    virtual void updateGliding(void);
    virtual void Mob::_allowAscendingScaffolding(void)const;
    virtual void ServerprepareRegion(ChunkSource &);
    virtual void ServerdestroyRegion(void);
    virtual void ServersuspendRegion(void);
    virtual void _fireWillChangeDimension(void);
    virtual void _fireDimensionChanged(void);
    virtual void ServerchangeDimensionWithCredits(AutomaticID<Dimension, int>);
    virtual void ServertickWorld(Tick const&);
    virtual void ServerframeUpdate(FrameUpdateContextBase &);
    virtual void getTickingOffsets(void)const;
    virtual void moveView(void);
    virtual void moveSpawnView(Vec3 const&);
    virtual void setName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void ServercheckMovementStats(Vec3 const&);
    virtual void getCurrentStructureFeature(void)const;
    virtual void isAutoJumpEnabled(void)const;
    virtual void respawn(void);
    virtual void resetRot(void);
    virtual void resetPos(bool);
    virtual void isInTrialMode(void);
    virtual void hasResource(int);
    virtual void completeUsingItem(void);
    virtual void ServersetPermissions(CommandPermissionLevel);
    virtual void startCrafting(BlockPos const&, bool);
    virtual void startStonecutting(BlockPos const&);
    virtual void startDestroying(void);
    virtual void stopDestroying(void);
    virtual void ServeropenContainer(BlockPos const&);
    virtual void ServeropenContainer(ActorUniqueID const&);
    virtual void ServeropenFurnace(BlockPos const&);
    virtual void ServeropenBlastFurnace(BlockPos const&);
    virtual void ServeropenSmoker(BlockPos const&);
    virtual void ServeropenEnchanter(BlockPos const&);
    virtual void ServeropenAnvil(BlockPos const&);
    virtual void ServeropenGrindstone(BlockPos const&);
    virtual void ServeropenBrewingStand(BlockPos const&);
    virtual void ServeropenHopper(BlockPos const&);
    virtual void ServeropenHopper(ActorUniqueID const&);
    virtual void ServeropenDispenser(BlockPos const&, bool);
    virtual void ServeropenBeacon(BlockPos const&);
    virtual void ServeropenPortfolio(void);
    virtual void openBook(int, bool, int, BlockActor *);
    virtual void ServeropenCommandBlock(BlockPos const&);
    virtual void ServeropenCommandBlockMinecart(ActorUniqueID const&);
    virtual void ServeropenHorseInventory(ActorUniqueID const&);
    virtual void ServeropenTrading(ActorUniqueID const&, bool);
    virtual void canOpenContainerScreen(void);
    virtual void openChalkboard(ChalkboardBlockActor &, bool);
    virtual void ServeropenNpcInteractScreen(Actor &);
    virtual void ServeropenInventory(void);
    virtual void ServeropenStructureEditor(BlockPos const&);
    virtual void ServeropenLabTable(BlockPos const&);
    virtual void ServeropenElementConstructor(BlockPos const&);
    virtual void ServeropenCompoundCreator(BlockPos const&);
    virtual void ServeropenMaterialReducer(BlockPos const&);
    virtual void openLoom(BlockPos const&);
    virtual void openStonecutter(BlockPos const&);
    virtual void openCartographyTable(BlockPos const&);
    virtual void displayChatMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void displayClientMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void ServerdisplayLocalizableMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    virtual void ServerdisplayTextObjectMessage(TextObjectRoot const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void ServerdisplayWhisperMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void startSleepInBed(BlockPos const&);
    virtual void ServerstopSleepInBed(bool, bool);
    virtual void canStartSleepInBed(void);
    virtual void getSleepTimer(void)const;
    virtual void getPreviousTickSleepTimer(void)const;
    virtual void openSign(BlockPos const&);
    virtual void playEmote(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void isLocalPlayer(void)const;
    virtual void ServerisHostingPlayer(void)const;
    virtual void ServerisLoading(void)const;
    virtual void ServerisPlayerInitialized(void)const;
    virtual void stopLoading(void);
    virtual void registerTrackedBoss(ActorUniqueID);
    virtual void unRegisterTrackedBoss(ActorUniqueID);
    virtual void ServersetPlayerGameType(GameType);
    virtual void _crit(Actor &);
    virtual void getEventing(void)const;
    virtual void getUserId(void)const;
    virtual void sendEventPacket(EventPacket &)const;
    virtual void addExperience(int);
    virtual void addLevels(int);
    virtual void ServersetContainerData(IContainerManager &, int, int);
    virtual void ServerslotChanged(IContainerManager &, int, ItemStack const&, ItemStack const&, bool);
    virtual void inventoryChanged(Container &, int, ItemStack const&, ItemStack const&);
    virtual void ServerrefreshContainer(IContainerManager &);
    virtual void ServerdeleteContainerManager(void);
    virtual void setFieldOfViewModifier(float);
    virtual void ServerisPositionRelevant(AutomaticID<Dimension, int>, BlockPos const&);
    virtual void ServerisEntityRelevant(Actor const&);
    virtual void ServerisTeacher(void)const;
    virtual void ServeronSuspension(void);
    virtual void ServeronLinkedSlotsChanged(void);
    virtual void startCooldown(Item const*);
    virtual void getItemCooldownLeft(CooldownType)const;
    virtual void isItemInCooldown(CooldownType)const;
    virtual void ServersendInventoryTransaction(InventoryTransaction const&)const;
    virtual void ServersendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction, std::default_delete<ComplexInventoryTransaction>>)const;
    virtual void ServersendNetworkPacket(Packet &)const;
    virtual void ServergetPlayerEventCoordinator(void);
    virtual void ServergetMoveInputHandler(void);
    virtual void ServergetInputMode(void)const;
    virtual void ServergetPlayMode(void)const;
    virtual void ServerreportMovementTelemetry(MovementEventType);
    virtual void onMovePlayerPacketNormal(Vec3 const&, Vec2 const&, float);
}
