#pragma once

class ActorIsMovingTest : SimpleBoolFilterTest {

public:
    virtual ActorIsMovingTest::~ActorIsMovingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsMovingTest(void);
};
