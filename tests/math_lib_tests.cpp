#include <gtest/gtest.h>
#include "math_lib.h"

TEST(AdditionTest, PositiveNumbers) {
    EXPECT_DOUBLE_EQ(add(2.5, 3.5), 6.0);
}

TEST(MathLibTests, SubtractDoubles) {
    EXPECT_DOUBLE_EQ(subtract_doubles(5.5, 2.5), 3.0);
    EXPECT_DOUBLE_EQ(subtract_doubles(-1.0, -1.0), 0.0);
    EXPECT_DOUBLE_EQ(subtract_doubles(0.0, 3.0), -3.0);
}