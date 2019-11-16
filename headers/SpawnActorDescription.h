#pragma once

class SpawnActorDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~SpawnActorDescription();
    virtual void ~SpawnActorDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
