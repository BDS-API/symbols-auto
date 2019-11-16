#pragma once

class LookAtBlockDefinition : BehaviorDefinition {

    virtual void ~LookAtBlockDefinition();
    virtual void ~LookAtBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
