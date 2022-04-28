#if !defined(GRADE_HPP)
#define GRADE_HPP

#include "course.hpp"
#include "student.hpp"
#include <string>

namespace temp
{
    class Grade
    {
      private:
        /**
         * @brief Student ID (assigned by the system)
         */
        int _student_id;

        /**
         * @brief Course ID (assigned by the system)
         */
        int _course_id;

        /**
         * @brief Grade qualification character (assigned by administrative staff)
         */
        char _grade;

      public:
        /**
         * @brief Construct a new Grade object
         */
        Grade();

        /**
         * @brief Destroy the Grade object
         */
        ~Grade();

        /**
         * @brief Get the Student Id object
         * @return int
         */
        int getStudentId();

        /**
         * @brief Set the Student Id object
         */
        void setStudenId(int);

        /**
         * @brief Get the Course Id object
         * @return int
         */
        int getCourseId();

        /**
         * @brief Set the Course Id object
         */
        void setCourseId(int);

        /**
         * @brief Get the Name object
         * @return char
         */
        char getGradeValue();

        /**
         * @brief Set the Name object
         */
        void setGradeValue(char);

        std::string toString();
    };

} // namespace temp

#endif // GRADE_HPP
