#pragma once

class RaidGardenGoal : MoveToBlockGoal {

    virtual void ~RaidGardenGoal();
    virtual void ~RaidGardenGoal();
    virtual void canUse(void);
    virtual void canContinueToUse(void);
    virtual void Goal::canBeInterrupted(void);
    virtual void start(void);
    virtual void BaseMoveToGoal::stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void Goal::isTargetGoal(void)const;
    virtual void Goal::onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void BaseMoveToGoal::hasReachedTarget(void)const;
    virtual void isValidTarget(BlockSource &, BlockPos const&);
    virtual void BaseMoveToGoal::_nextStartTick(void);
    virtual void BaseMoveToGoal::_canReach(BlockPos const&);
    virtual void _moveToBlock(void);
    virtual void BaseMoveToGoal::_getTargetPosition(void)const;
    virtual void BaseMoveToGoal::_getRepathTime(void)const;
    virtual void findNearestBlock(void);
}
