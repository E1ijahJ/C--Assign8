#include <gtest/gtest.h>
#include "math_lib.h"

TEST(MathLibTests, AddDoubles) {
    EXPECT_DOUBLE_EQ(add(2.5, 3.5), 6.0);
}

TEST(MathLibTests, SubtractDoubles) {
    EXPECT_DOUBLE_EQ(subtract(5.0, 2.0), 3.0);
}

TEST(MathLibTests, MultiplyDoubles) {
    EXPECT_DOUBLE_EQ(multiply(4.0, 2.5), 10.0);
}

TEST(MathLibTests, DivideDoubles) {
    EXPECT_DOUBLE_EQ(divide(10.0, 2.0), 5.0);
}