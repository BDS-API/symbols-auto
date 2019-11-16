#pragma once

class NavigationSwimDescription : NavigationDescription {

    virtual void getJsonName(void)const;
    virtual void ~NavigationSwimDescription();
    virtual void ~NavigationSwimDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
