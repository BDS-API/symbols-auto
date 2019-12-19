#pragma once

class StructurePoolBlockTagRule {

public:

    StructurePoolBlockTagRule(std::unique_ptr<IStructurePoolBlockTagPredicate, std::default_delete<IStructurePoolBlockTagPredicate>> &&, std::string, std::allocator<char>);
    void processRule(Block const&, CompoundTag &)const;
};
