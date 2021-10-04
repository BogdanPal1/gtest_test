#include "stack.h"
#include "gtest/gtest.h"

class StackTest : public ::testing::Test
{
protected:
    void SetUp() override
    {
        _s1.push(1);
        _s1.push(2);
    }

    Stack<int> _s1;
    Stack<int> _s2;
};

TEST_F(StackTest, InitialEmpty) {
    EXPECT_EQ(0, _s2.size());
}

TEST_F(StackTest, CheckTop) {
    EXPECT_EQ(2, _s1.top());
}

TEST_F(StackTest, CheckPopAndTop) {
    _s1.pop();
    EXPECT_EQ(2, _s1.top());
}
