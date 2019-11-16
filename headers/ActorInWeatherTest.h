#pragma once

class ActorInWeatherTest : FilterTest {

    virtual void ~ActorInWeatherTest();
    virtual void ~ActorInWeatherTest();
    virtual void setup(Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void getName(void)const;
    virtual void _serializeDomain(void)const;
    virtual void _serializeValue(void)const;
}
