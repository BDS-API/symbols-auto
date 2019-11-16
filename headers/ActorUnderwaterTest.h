#pragma once

class ActorUnderwaterTest : SimpleBoolFilterTest {

    virtual void ~ActorUnderwaterTest();
    virtual void ~ActorUnderwaterTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void FilterTest::finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void getName(void)const;
    virtual void FilterTest::_serializeDomain(void)const;
    virtual void _serializeValue(void)const;
}
