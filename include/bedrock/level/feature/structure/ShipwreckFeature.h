#pragma once

#include "./OceanMonumentFeature.h"
#include "./StructureFeature.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../util/ChunkPos.h"


class ShipwreckFeature : StructureFeature {

public:
    virtual ~ShipwreckFeature();
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos &);
    virtual bool isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);

    ShipwreckFeature(OceanMonumentFeature &, unsigned int);
    bool isShipwreckBeached(int);
};
