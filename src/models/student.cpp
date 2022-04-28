#include "student.hpp"

temp::Student::Student()
{
    this->_id = 0;
    this->_name = "";
}

temp::Student::~Student()
{
}

int temp::Student::getId()
{
    return this->_id;
}

void temp::Student::setId(int value)
{
    if (value > 0)
        this->_id = value;
}

std::string temp::Student::getName()
{
    return this->_name;
}

void temp::Student::setName(std::string value)
{
    this->_name = value;
}

std::string temp::Student::toString()
{
    return std::to_string(this->getId()) + "\t" + this->getName();
}
