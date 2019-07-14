#include "sparrow.hpp"
#include "gtest/gtest.h"


TEST(SparrowTest, all) {
    sgi::sparrow ms;
    int a = 10;

    EXPECT_EQ(ms.increament(a), 20);
}
