#pragma once

#include "../CommandRegistry.h"
#include "../Command.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class FillCommand : Command {

public:
    virtual ~FillCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    FillCommand();
};
