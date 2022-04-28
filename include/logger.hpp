#if !defined(LOGGER_HPP)
#define LOGGER_HPP

#include "student.hpp"
#include "course.hpp"
#include "grade.hpp"
#include <iostream>
#include <string>
#include <vector>

namespace temp
{
    class Logger
    {
      private:
        /* data */
      public:
        Logger();
        ~Logger();

        static void logInfo(std::string);
        static void logInfo(std::vector<std::string>&);
        
        static void logStudents(temp::Student&);
        static void logStudents(std::vector<temp::Student>&);

        static void logCourses(temp::Course&);
        static void logCourses(std::vector<temp::Course>&);

        static void logGrades(temp::Grade&);
        static void logGrades(std::vector<temp::Grade>&);
    };

} // namespace temp

#endif // LOGGER_HPP
