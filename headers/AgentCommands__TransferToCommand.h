#pragma once

class AgentCommands::TransferToCommand : AgentCommands::Command {

    virtual void ~TransferToCommand();
    virtual void ~TransferToCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
