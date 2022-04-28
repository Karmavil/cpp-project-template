#if !defined(LOGIC_HPP)
#define LOGIC_HPP

#include "course.hpp"
#include "logger.hpp"
#include "models_data.hpp"
#include "student.hpp"
#include <vector>

namespace temp
{
    class Logic
    {
      private:
        /* data */
      public:
      /**
       * @brief Construct a new Logic object
       */
        Logic();
        
        /**
         * @brief Destroy the Logic object
         */
        ~Logic();

        /**
         * @brief Get the Students object
         * @return std::vector<temp::Student>& 
         */
        std::vector<temp::Student> getStudents();

        /**
         * @brief Get the Courses object
         * @return std::vector<temp::Course>& 
         */
        std::vector<temp::Course> getCourses();

        /**
         * @brief Get the Grades object
         * @return std::vector<temp::Grade>& 
         */
        std::vector<temp::Grade> getGrades();

        /**
         * @brief Get the Grades object
         * @return std::vector<temp::Grade>& 
         */
        std::vector<temp::Grade> getGrades(temp::Student);

        /**
         * @brief Get the Grades object
         * @return std::vector<temp::Grade>& 
         */
        std::vector<temp::Grade> getGrades(temp::Course);

        /**
         * @brief Returns the Grade Points Average that is the result of deviding
         * the total of points awarded (all courses taken by the student) by the
         * total amount of credits in those courses.
         */
        void calculateGPA(temp::Student);
    };

} // namespace temp

#endif // LOGIC_HPP
