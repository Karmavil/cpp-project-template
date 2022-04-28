#include "logger.hpp"

temp::Logger::Logger()
{
}

temp::Logger::~Logger()
{
}

void temp::Logger::logInfo(std::string msg)
{
    std::cout << msg << std::endl;
}

void temp::Logger::logInfo(std::vector<std::string> &msg)
{
    for (auto &&item : msg)
    {
        logInfo(item);
    }
}

void temp::Logger::logStudents(temp::Student &student)
{
    logInfo(student.toString());
}

void temp::Logger::logStudents(std::vector<temp::Student> &students)
{
    for (auto &&student : students)
    {
        logStudents(student);
    }
}

void temp::Logger::logCourses(temp::Course &course)
{
    logInfo(course.toString());
}

void temp::Logger::logCourses(std::vector<temp::Course> &courses)
{
    for (auto &&course : courses)
    {
        logCourses(course);
    }
}

void temp::Logger::logGrades(temp::Grade &grade)
{
    logInfo(grade.toString());
}

void temp::Logger::logGrades(std::vector<temp::Grade> &grades)
{
    for (auto &&grade : grades)
    {
        logGrades(grade);
    }
}
