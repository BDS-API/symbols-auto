#pragma once

class SpecificEnchantFunction : LootItemFunction {

    virtual void ~SpecificEnchantFunction();
    virtual void ~SpecificEnchantFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}
