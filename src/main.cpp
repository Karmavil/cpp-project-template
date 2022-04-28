#include "course.hpp"
#include "grade.hpp"
#include "logger.hpp"
#include "logic.hpp"
#include "student.hpp"
#include <iostream>
#include <string>

int main()
{
    try
    {
        temp::Logic data;
        // temp::Logger::logStudents(data.getStudents());
        // temp::Logger::logCourses(data.getCourses());
        // temp::Logger::logGrades(data.getGrades());
        std::vector<temp::Student> students = data.getStudents();
        for (auto &&student : students)
        {
            data.calculateGPA(student);
        }
    }
    catch (const std::runtime_error &re)
    {
        // Speciffic handling for runtime_error
        std::cerr << "Runtime error: " << re.what() << std::endl;
        std::cout << "RE: " << re.what() << std::endl;
    }
    catch (const std::exception &ex)
    {
        // Speciffic handling for all exceptions extending std::exception, except
        // std::runtime_error which is handled explicitly
        std::cerr << "Error occurred: " << ex.what() << std::endl;
        std::cout << "EX: " << ex.what() << std::endl;
    }
    catch (...)
    {
        // Catch any other errors (that we have no information about)
        std::cerr << "Unknown failure occurred. Possible memory corruption" << std::endl;
    }

    return 0;
}
