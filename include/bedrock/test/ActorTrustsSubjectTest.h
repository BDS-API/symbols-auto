#pragma once

class ActorTrustsSubjectTest : SimpleBoolFilterTest {

public:
    virtual ActorTrustsSubjectTest::~ActorTrustsSubjectTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorTrustsSubjectTest(void);
};
