#pragma once

class BurstReactionComponent : LabTableReactionComponent {

    virtual void ~BurstReactionComponent();
    virtual void ~BurstReactionComponent();
    virtual void _onStart(LabTableReaction &, BlockSource &);
    virtual void _onTick(LabTableReaction &, BlockSource &);
    virtual void _onEnd(LabTableReaction &, BlockSource &);
}
