#include "models_data.hpp"

// Will be used to obtain a seed for the random number engine
std::random_device rd;

// Standard mersenne_twister_engine seeded with rd()
std::mt19937 gen(rd());

std::uniform_real_distribution<> getNumberBetween0and5(0, 5);
std::uniform_real_distribution<> getNumberBetween65and70(65, 70);

temp::Models::Models()
{
}

temp::Models::~Models()
{
}

std::vector<temp::Student> temp::Models::getStudents()
{
    std::vector<temp::Student> output;
    std::vector<std::string> names = {
        "Sandra", "Michael", "Sebastian", "Monica",   "John",   "Daniel", "Gabriel", "Fernando", "Nicolas", "Alejandro",
        "Robert", "Luis",    "Ana",       "Federico", "Emma",   "Magali", "Albert",  "Leticia",  "Pablo",   "Caroline",
        "Arthur", "Anselmo", "Santiago",  "Ricardo",  "Rachel", "Osvald", "Laura",   "Joseph",   "Diego",   "Jessica"};
    for (size_t i{}; i < names.size(); i++)
    {
        temp::Student student;
        student.setId(i + 1);
        student.setName(names[i]);
        output.emplace_back(student);
    }

    return output;
}

std::vector<temp::Course> temp::Models::getCourses()
{
    std::vector<temp::Course> output;
    std::vector<std::string> titles = {"Support",   "Human Resources", "Accounting", "Engineering",
                                       "Marketing", "Services",        "Sales"};
    for (size_t i{}; i < titles.size(); i++)
    {
        temp::Course course;
        course.setId(i + 1);
        course.setName(titles[i]);
        output.emplace_back(course);
    }
    return output;
}

std::vector<temp::Grade> temp::Models::getGrades()
{
    std::vector<temp::Grade> output;
    std::vector<temp::Student> students = this->getStudents();
    std::vector<temp::Course> courses = this->getCourses();

    for (auto &&course : courses)
    {
        uint8_t credits = getNumberBetween0and5(gen);
        course.setCredits(credits);
        for (auto &&student : students)
        {
            temp::Grade grade;
            grade.setCourseId(course.getId());
            grade.setStudenId(student.getId());
            char assigned_grade = getNumberBetween65and70(gen);
            grade.setGradeValue(assigned_grade);
            output.emplace_back(grade);
        }
    }

    return output;
}

std::vector<temp::Grade> temp::Models::getGrades(temp::Student &student)
{
    std::vector<temp::Grade> output;
    auto grades = this->getGrades();
    for (auto &&item : grades)
    {
        if (item.getStudentId() == student.getId())
            output.emplace_back(item);
    }

    return output;
}

std::vector<temp::Grade> temp::Models::getGrades(temp::Course &course)
{
    std::vector<temp::Grade> output;
    auto grades = this->getGrades();
    for (auto &&item : grades)
    {
        if (item.getStudentId() == course.getId())
            output.emplace_back(item);
    }

    return output;
}
