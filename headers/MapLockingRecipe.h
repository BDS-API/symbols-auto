#pragma once

class MapLockingRecipe : MultiRecipe {

    virtual void ~MapLockingRecipe();
    virtual void ~MapLockingRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual void isShapeless(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual void isExperimental(void)const;
    virtual void Recipe::getId(void)const;
    virtual void Recipe::getItemPack(void)const;
    virtual void isMultiRecipe(void)const;
    virtual void Recipe::itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const;
    virtual void Recipe::itemsMatch(ItemDescriptor const&, ItemDescriptor const&, CompoundTag const*)const;
    virtual void Recipe::itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const;
}
