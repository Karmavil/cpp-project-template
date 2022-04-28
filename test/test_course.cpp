#include "course.hpp"
#include "gtest/gtest.h"

class CourseTest : public ::testing::Test
{
  protected:
    temp::Course course;
    CourseTest()
    {
        this->course = temp::Course();
        this->course.setId(1);
        this->course.setName("Test");
    }
};

TEST_F(CourseTest, ID_nonzero)
{
    EXPECT_GT(this->course.getId(), 0);
}

TEST_F(CourseTest, Name_not_empty)
{
    EXPECT_NE(this->course.getName(), "");
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
