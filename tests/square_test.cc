#include "square.h"
#include "gtest/gtest.h"

TEST (SquareTest, PositiveInts) {
    EXPECT_EQ(4, square(2));
    EXPECT_EQ(16, square(4));
}

TEST (SquareTest, NegativeInts) {
    EXPECT_EQ(9, square(-3));
}
