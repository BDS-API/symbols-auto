#pragma once

class SpawnChanceSubcomponent : OnHitSubcomponent {

    virtual void ~SpawnChanceSubcomponent();
    virtual void ~SpawnChanceSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
