#pragma once

#include "../../unmapped/ContentIdentity.h"
#include "../../mce/UUID.h"
#include "../../unmapped/SemVersion.h"
#include "./ResourcePackInfoData.h"
#include <string>


class ResourcePackInfoData {

public:

    ~ResourcePackInfoData();
    ResourcePackInfoData(ResourcePackInfoData &&);
    ResourcePackInfoData(ResourcePackInfoData const&);
    ResourcePackInfoData(mce::UUID const&, SemVersion const&, unsigned long, std::string const&, std::string const&, ContentIdentity const&, bool);
    ResourcePackInfoData();
};
