#pragma once

#include "../Mob"
#include "../../../unmapped/MobDescriptor"
#include "../Player"


class NearestAttackableTargetGoal : TargetGoal {

public:
    virtual NearestAttackableTargetGoal::~NearestAttackableTargetGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _findTarget(MobDescriptor const**);

    NearestAttackableTargetGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&, float, int, bool, int, bool, bool, int, float, bool, int);
    void _canStartSearching();
    void _selectTarget();
    void _isTargetVisible(Mob const&, float, float)const;
    void _getNearbyActors();
    void _applyPlayerVisibilityModifier(Player const&, float &)const;
};
