
#ifndef __TESTFIXTURE_H__
#define __TESTFIXTURE_H__

#include "utils/Chrono.h"

#include <gtest/gtest.h>


class TestFixture : public testing::Test
{
public:
    TestFixture()
    {}

    static int wait(int timeOut);
};


#endif //__TESTFIXTURE_H__
