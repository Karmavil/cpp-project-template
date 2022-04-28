#if !defined(STUDENT_HPP)
#define STUDENT_HPP

#include <string>

namespace temp
{
    class Student
    {
      private:
        /**
         * @brief Student ID (assigned by the system)
         */
        int _id;

        /**
         * @brief Student name (assigned by administrative staff)
         */
        std::string _name;

      public:
      /**
       * @brief Construct a new Student object
       */
        Student();

        /**
         * @brief Destroy the Student object
         */
        ~Student();

        /**
         * @brief Get the Id object
         * @return int 
         */
        int getId();

        /**
         * @brief Set the Id object
         */
        void setId(int);

        /**
         * @brief Get the Name object
         * @return std::string 
         */
        std::string getName();

        /**
         * @brief Set the Name object
         */
        void setName(std::string);

        /**
         * @brief Return a string representation of the Student object
         * @return std::string 
         */
        std::string toString();
    };

} // namespace temp

#endif // STUDENT_HPP
