#pragma once

class ActorIsClimbingTest : SimpleBoolFilterTest {

public:
    virtual ActorIsClimbingTest::~ActorIsClimbingTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsClimbingTest(void);
};
