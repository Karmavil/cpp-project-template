#if !defined(MODELS_HPP)
#define MODELS_HPP

#include "course.hpp"
#include "grade.hpp"
#include "student.hpp"
#include <chrono>
#include <vector>
#include <random>

namespace temp
{
    class Models
    {
      private:
        /* data */
      public:
        Models();
        ~Models();
        std::vector<temp::Student> getStudents();
        std::vector<temp::Course> getCourses();
        std::vector<temp::Grade> getGrades();
        std::vector<temp::Grade> getGrades(temp::Student&);
        std::vector<temp::Grade> getGrades(temp::Course&);
    };

} // namespace temp

#endif // MODELS_HPP
