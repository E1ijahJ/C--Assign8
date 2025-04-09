#include <gtest/gtest.h>
#include "math_lib.h"

TEST(AdditionTest, PositiveNumbers) {
    EXPECT_DOUBLE_EQ(add(2.5, 3.5), 6.0);
}