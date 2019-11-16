#pragma once

class ScriptServerSpawnParticleInWorldEvent : ScriptTemplateFactory_ltScriptServerContext_ge::ReceivedEvent {

    virtual void ~ScriptServerSpawnParticleInWorldEvent();
    virtual void ~ScriptServerSpawnParticleInWorldEvent();
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptObjectHandle &);
}
