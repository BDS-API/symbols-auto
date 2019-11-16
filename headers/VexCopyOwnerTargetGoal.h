#pragma once

class VexCopyOwnerTargetGoal : TargetGoal {

    virtual void VexCopyOwner~VexCopyOwnerTargetGoal();
    virtual void VexCopyOwner~VexCopyOwnerTargetGoal();
    virtual void VexCopyOwnercanUse(void);
    virtual void canContinueToUse(void);
    virtual void Goal::canBeInterrupted(void);
    virtual void VexCopyOwnerstart(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void VexCopyOwnerappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void Goal::onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void _canAttack(Mob *, Actor *, bool, bool, MobDescriptor const**);
}
