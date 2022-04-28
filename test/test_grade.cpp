#include "grade.hpp"
#include "gtest/gtest.h"

class GradeTest : public ::testing::Test
{
  protected:
    temp::Grade grade;
    GradeTest()
    {
        this->grade = temp::Grade();
        this->grade.setStudenId(1);
        this->grade.setCourseId(1);
        this->grade.setGradeValue('A');
    }
};

TEST_F(GradeTest, StudentID_nonzero)
{
    EXPECT_GT(this->grade.getStudentId(), 0);
}

TEST_F(GradeTest, CourseID_nonzero)
{
    EXPECT_GT(this->grade.getCourseId(), 0);
}

TEST_F(GradeTest, Grade_not_empty)
{
    EXPECT_NE(this->grade.getGradeValue(), ' ');
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
