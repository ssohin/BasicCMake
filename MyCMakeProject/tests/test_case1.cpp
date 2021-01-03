#include <gtest/gtest.h>

TEST(Subtraction, test_subtraction)
{   
    int a = 5;
    a = a - a;
    EXPECT_EQ(a, 0);
}
