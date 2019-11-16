#pragma once

class IceBombItem : ChemistryItem {

    virtual void ~IceBombItem();
    virtual void ~IceBombItem();
    virtual void Item::tearDown(void);
    virtual void Item::getMaxUseDuration(ItemInstance const*)const;
    virtual void Item::getMaxUseDuration(ItemStack const*)const;
    virtual void Item::isExperimental(ItemDescriptor const*)const;
    virtual void Item::setMaxStackSize(unsigned char);
    virtual void Item::setCategory(CreativeItemCategory);
    virtual void Item::setStackedByData(bool);
    virtual void Item::setMaxDamage(int);
    virtual void Item::setHandEquipped(void);
    virtual void Item::setUseAnimation(UseAnimation);
    virtual void Item::setMaxUseDuration(int);
    virtual void Item::setRequiresWorldBuilder(bool);
    virtual void Item::setExplodable(bool);
    virtual void Item::setIsGlint(bool);
    virtual void Item::setShouldDespawn(bool);
    virtual void Item::getBlockShape(void)const;
    virtual void Item::canBeDepleted(void)const;
    virtual void Item::canDestroySpecial(Block const&)const;
    virtual void Item::getLevelDataForAuxValue(int)const;
    virtual void Item::isStackedByData(void)const;
    virtual void Item::getMaxDamage(void)const;
    virtual void Item::getAttackDamage(void)const;
    virtual void Item::isHandEquipped(void)const;
    virtual void Item::isArmor(void)const;
    virtual void Item::isDye(void)const;
    virtual void Item::isFertilizer(int)const;
    virtual void Item::isGlint(ItemStackBase const&)const;
    virtual void isThrowable(void)const;
    virtual void Item::isPattern(void)const;
    virtual void Item::showsDurabilityInCreative(void)const;
    virtual void Item::isWearableThroughLootTable(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void Item::canDestroyInCreative(void)const;
    virtual void Item::isDestructive(int)const;
    virtual void Item::isLiquidClipItem(int)const;
    virtual void Item::requiresInteract(void)const;
    virtual void Item::appendFormattedHovertext(ItemStackBase const&, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual void Item::isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void Item::getEnchantSlot(void)const;
    virtual void Item::getEnchantValue(void)const;
    virtual void Item::getArmorValue(void)const;
    virtual void Item::isComplex(void)const;
    virtual void Item::isValidAuxValue(int)const;
    virtual void Item::getDamageChance(int)const;
    virtual void Item::uniqueAuxValues(void)const;
    virtual void Item::isMultiColorTinted(ItemStack const&)const;
    virtual void Item::getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&, ItemDescriptor const&)const;
    virtual void Item::getBaseColor(ItemStack const&)const;
    virtual void Item::getSecondaryColor(ItemStack const&)const;
    virtual void Item::saveAdditionalData(ItemStackBase const&, CompoundTag &)const;
    virtual void Item::readAdditionalData(ItemStackBase &, CompoundTag const&)const;
    virtual void Item::isTintable(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void Item::useTimeDepleted(ItemInstance &, Level *, Player *)const;
    virtual void Item::useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void Item::releaseUsing(ItemInstance &, Player *, int)const;
    virtual void Item::releaseUsing(ItemStack &, Player *, int)const;
    virtual void Item::getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void Item::hurtEnemy(ItemInstance &, Mob *, Mob *)const;
    virtual void Item::hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void Item::mineBlock(ItemInstance &, Block const&, int, int, int, Actor *)const;
    virtual void Item::mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void _ZNK4Item18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE;
    virtual void _ZNK4Item26buildEffectDescriptionNameB5cxx11ERK13ItemStackBase;
    virtual void _ZNK4Item28buildCategoryDescriptionNameB5cxx11Ev;
    virtual void Item::readUserData(ItemStackBase &, IDataInput &, ReadOnlyBinaryStream &)const;
    virtual void Item::writeUserData(ItemStackBase const&, IDataOutput &)const;
    virtual void Item::getMaxStackSize(ItemDescriptor const&)const;
    virtual void Item::inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual void Item::refreshedInContainer(ItemStackBase &, Level &)const;
    virtual void getCooldownType(void)const;
    virtual void getCooldownTime(void)const;
    virtual void fixupOnLoad(ItemStackBase &)const;
    virtual void Item::fixupOnLoad(ItemStackBase &, Level &)const;
    virtual void Item::getDamageValue(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void Item::setDamageValue(ItemStackBase &, short)const;
    virtual void Item::getInHandUpdateType(Player const&, ItemInstance const&, ItemInstance const&, bool, bool)const;
    virtual void Item::getInHandUpdateType(Player const&, ItemStack const&, ItemStack const&, bool, bool)const;
    virtual void Item::isSameItem(ItemStackBase const&, ItemStackBase const&)const;
    virtual void _ZNK4Item15getInteractTextB5cxx11ERK6Player;
    virtual void Item::getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void Item::isEmissive(int)const;
    virtual void Item::getIcon(ItemStackBase const&, int, bool)const;
    virtual void Item::getIconYOffset(void)const;
    virtual void Item::setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    virtual void Item::setIcon(TextureUVCoordinateSet const&);
    virtual void Item::setIconAtlas(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    virtual void Item::canBeCharged(void)const;
    virtual void Item::playSoundIncrementally(ItemInstance const&, Mob &)const;
    virtual void Item::playSoundIncrementally(ItemStack const&, Mob &)const;
    virtual void _ZNK4Item23getAuxValuesDescriptionB5cxx11Ev;
    virtual void Item::_checkUseOnPermissions(Actor &, ItemInstance &, unsigned char const&, BlockPos const&)const;
    virtual void Item::_checkUseOnPermissions(Actor &, ItemStack &, unsigned char const&, BlockPos const&)const;
    virtual void Item::_calculatePlacePos(ItemInstance &, Actor &, unsigned char &, BlockPos &)const;
    virtual void Item::_calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void Item::_useOn(ItemInstance &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void Item::_useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
}
