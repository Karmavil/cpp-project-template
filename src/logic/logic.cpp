#include "logic.hpp"

temp::Logic::Logic()
{
}

temp::Logic::~Logic()
{
}

std::vector<temp::Student> temp::Logic::getStudents()
{
    temp::Models models;
    return models.getStudents();
}

std::vector<temp::Course> temp::Logic::getCourses()
{
    temp::Models models;
    return models.getCourses();
}

std::vector<temp::Grade> temp::Logic::getGrades()
{
    temp::Models models;
    return models.getGrades();
}

std::vector<temp::Grade> temp::Logic::getGrades(temp::Student student)
{
    std::vector<temp::Grade> output;
    temp::Models models;
    std::vector<temp::Grade> grades = models.getGrades(student);
    for (auto &&grade : grades)
    {
        if (grade.getStudentId() == student.getId())
            output.emplace_back(grade);
    }

    return output;
}

void temp::Logic::calculateGPA(temp::Student student)
{
    auto courses = this->getCourses();
    auto grades = this->getGrades(student);
    double gpa = 0;
    double total_credits = 0; // Total credits (sum of credits available in each course)
    double total_points = 0;  // Total points (sum of points awarded in each course)
    for (auto &&course : courses)
    {
        total_credits += course.getCredits();
        char grade_value = 0;
        size_t index = 0;
        for (size_t i = 0; i < grades.size(); i++)
        {
            if (course.getId() == grades[i].getCourseId())
                grade_value = grades[i].getGradeValue();
        }
        grades.erase(grades.begin() + index);
        total_points += (course.getCredits() * (grade_value == 'A'   ? 4
                                                : grade_value == 'B' ? 3
                                                : grade_value == 'C' ? 2
                                                : grade_value == 'D' ? 1
                                                                     : 0));
    }
    if (total_points == 0.0 || total_credits == 0)
        gpa = 0;
    else
        gpa = total_points / total_credits;

    temp::Logger::logInfo("GPA: " + std::to_string(gpa) + " Name: " + student.getName());
}
