#pragma once

class MineshaftFeature : StructureFeature {

    virtual void ~MineshaftFeature();
    virtual void ~MineshaftFeature();
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual void postProcess(BlockSource *, Random &, int, int);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual void isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual void getStructureAt(int, int, int);
    virtual void getGuesstimatedFeaturePositions(void);
}
