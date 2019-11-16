#pragma once

class BehaviorDefinition {

    virtual void ~BehaviorDefinition();
    virtual void ~BehaviorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
