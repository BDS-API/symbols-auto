#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/Player"
#include "../bedrock/actor/unmapped/ActorInteraction"


class BreedableComponent {

public:

    BreedableComponent(BreedableComponent&&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _meetsEnvironmentRequirements(Actor &);
    bool canMate(Actor const&, Actor const&)const;
    void mate(Actor &, Actor &);
    void _handlePregnancy(Actor &, Actor &);
    void _handleMate(Actor &, Actor &);
    void setInLove(Actor &, Player const*);
    void getLoveTimer()const;
    void setLoveTimer(int);
    void decrementLoveTimer();
    void getBreedCooldown()const;
    void decrementBreedCooldown();
    void resetLove(Actor &);
    void getLoveCause(Actor const&)const;
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    BreedableComponent(void);
};
