#pragma once

class TellRawCommand : MessagingCommand {

public:
    virtual TellRawCommand::~TellRawCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TellRawCommand(void);
};
