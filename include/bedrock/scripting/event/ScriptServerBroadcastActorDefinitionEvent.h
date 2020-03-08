#pragma once

#include "../ScriptVersionInfo"
#include "../ScriptObjectHandle"
#include "../unmapped/ScriptServerContext"
#include "../unmapped/ScriptEngine"


class ScriptServerBroadcastActorDefinitionEvent : ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent {

public:
    static long mHash;

    virtual ScriptServerBroadcastActorDefinitionEvent::~ScriptServerBroadcastActorDefinitionEvent()
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &);

    void getHash();
    ScriptServerBroadcastActorDefinitionEvent(void);
};
