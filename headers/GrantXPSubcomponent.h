#pragma once

class GrantXPSubcomponent : OnHitSubcomponent {

    virtual void ~GrantXPSubcomponent();
    virtual void ~GrantXPSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
