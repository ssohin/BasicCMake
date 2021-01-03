#include <gtest/gtest.h>

TEST(Addition, test_addition)
{   
    int a = 5;
    a = a + a;
    EXPECT_EQ(a, 10);
}
