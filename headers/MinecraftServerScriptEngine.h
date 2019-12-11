#pragma once

class MinecraftServerScriptEngine : ScriptEngineWithContext<ScriptServerContext>, ServerInstanceEventListener {

public:
    virtual ~MinecraftServerScriptEngine();
    virtual void setupInterface(void);
    virtual void onExecuteCommandCalled(ScriptApi::ScriptVersionInfo const&, ScriptCommand &&);
    virtual void executeCommand(ScriptCommand const&);
    virtual void _registerSystemObjects(ScriptApi::ScriptObjectHandle const&);
    virtual void _helpRegisterSystemCallbacks(ScriptApi::ScriptObjectHandle const&);
    virtual void _handleError(ScriptApi::ScriptReportItem const&);
    virtual void _handleWarning(ScriptApi::ScriptReportItem const&);
    virtual void onServerLevelInitialized(ServerInstance &, Level &);
    virtual void onServerUpdateStart(ServerInstance &);
    virtual void onServerUpdateEnd(ServerInstance &);
    virtual void onServerThreadStarted(ServerInstance &);
    virtual void onLeaveGameDone(ServerInstance &);
    virtual void onLevelTick(void);

    void MinecraftServerScriptEngine(ServerInstance &);
    void _queueResourcePackScripts(ResourcePackManager &);
    void _setupContext(Minecraft &, PacketSender &, entt::Registry<unsigned int> &);
    void _initializeServer(Level &, NetworkHandler &);
    void _unregisterEventListeners(Level *, NetworkHandler &);
    void _registerEventListeners(Level &, NetworkHandler &);
};
