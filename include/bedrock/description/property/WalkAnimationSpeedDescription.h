#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class WalkAnimationSpeedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~WalkAnimationSpeedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    WalkAnimationSpeedDescription();
};
