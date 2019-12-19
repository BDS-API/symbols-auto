#pragma once

class ActivatorRailBlock : BaseRailBlock {

public:
    virtual ActivatorRailBlock::~ActivatorRailBlock();
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getVariant(Block const&)const;

    ActivatorRailBlock(std::string const&, int);
};
