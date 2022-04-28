#include "student.hpp"
#include "gtest/gtest.h"

class StudentTest : public ::testing::Test
{
  protected:
    temp::Student student;
    StudentTest()
    {
        this->student = temp::Student();
        this->student.setId(1);
        this->student.setName("Test");
    }
};

TEST_F(StudentTest, ID_nonzero)
{
    EXPECT_GT(this->student.getId(), 0);
}

TEST_F(StudentTest, Name_not_empty)
{
    EXPECT_NE(this->student.getName(), "");
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
