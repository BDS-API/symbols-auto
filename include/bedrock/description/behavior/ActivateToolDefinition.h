#pragma once

class ActivateToolDefinition : BehaviorDefinition {

public:
    virtual ActivateToolDefinition::~ActivateToolDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    ActivateToolDefinition(void);
};
