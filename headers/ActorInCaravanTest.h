#pragma once

class ActorInCaravanTest : SimpleBoolFilterTest {

    virtual void ~ActorInCaravanTest();
    virtual void ~ActorInCaravanTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void FilterTest::finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void getName(void)const;
    virtual void FilterTest::_serializeDomain(void)const;
    virtual void _serializeValue(void)const;
}
