#pragma once

class TimerDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual TimerDescription::~TimerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TimerDescription(void);
};
