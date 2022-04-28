#if !defined(COURSE_HPP)
#define COURSE_HPP

#include <string>

namespace temp
{
    class Course
    {
      private:
        /**
         * @brief Course ID (assigned by the system)
         */
        int _id;

        /**
         * @brief Course name (assigned by administrative staff)
         */
        std::string _name;

        /**
         * @brief Minimum required credits to approve the course
         */
        uint8_t _credits;

      public:
        /**
         * @brief Construct a new Course object
         */
        Course();

        /**
         * @brief Destroy the Course object
         */
        ~Course();

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
         * @brief Get the Credits object
         * @return uint8_t
         */
        uint8_t getCredits();

        /**
         * @brief Set the Credits object
         */
        void setCredits(uint8_t);

        std::string toString();
    };

} // namespace temp

#endif // COURSE_HPP
