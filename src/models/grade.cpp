#include "grade.hpp"

temp::Grade::Grade()
{
    this->_student_id = 0;
    this->_course_id = 0;
    this->_grade = ' ';
}

temp::Grade::~Grade()
{
}

int temp::Grade::getStudentId()
{
    return this->_student_id;
}

void temp::Grade::setStudenId(int value)
{
    if (value > 0)
        this->_student_id = value;
}

int temp::Grade::getCourseId()
{
    return this->_course_id;
}

void temp::Grade::setCourseId(int value)
{
    if (value > 0)
        this->_course_id = value;
}

char temp::Grade::getGradeValue()
{
    return this->_grade;
}

void temp::Grade::setGradeValue(char value)
{
    if (value == 'A' || value == 'a')
        this->_grade = 'A';
    else if (value == 'B' || value == 'b')
        this->_grade = 'B';
    else if (value == 'C' || value == 'c')
        this->_grade = 'C';
    else if (value == 'D' || value == 'd')
        this->_grade = 'D';
    else if (value == 'E' || value == 'e')
        this->_grade = 'E';
    else if (value == 'F' || value == 'f')
        this->_grade = 'F';
    else
        this->_grade = ' ';
}

std::string temp::Grade::toString()
{
    return ("StudentID: " + std::to_string(this->getStudentId()) + "\t" +
            "CourseID: " + std::to_string(this->getCourseId()) + "\t" + "Grade: " + this->getGradeValue());
}
