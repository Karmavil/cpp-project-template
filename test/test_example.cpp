#include "example.hpp"
#include "gtest/gtest.h"

class ExampleTest : public ::testing::Test
{
  protected:
    temp::Example test;
    ExampleTest()
    {
        this->test = temp::Example();
    }
};

TEST_F(ExampleTest, test_output_nonzero)
{
    EXPECT_GT(this->test.getTestValue(), 0);
}

TEST_F(ExampleTest, test_not_exceeded)
{
    EXPECT_LE(this->test.getTestValue(), 100);
}


int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
