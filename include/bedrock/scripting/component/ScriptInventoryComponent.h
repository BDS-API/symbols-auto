#pragma once

#include "../../actor/Actor"
#include "../ScriptObjectHandle"
#include "../unmapped/ScriptServerContext"
#include "../ScriptVersionInfo"
#include "../unmapped/ScriptEngine"


class ScriptInventoryComponent : ScriptTemplateFactory<ScriptServerContext>::Component {

public:
    static long mHash;

    virtual ScriptInventoryComponent::~ScriptInventoryComponent()
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;

    void getHash();
    ScriptInventoryComponent(void);
};
