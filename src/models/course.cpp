#include "course.hpp"

temp::Course::Course()
{
    this->_id = 1;
    this->_name = "";
}

temp::Course::~Course()
{
}

int temp::Course::getId()
{
    return this->_id;
}

void temp::Course::setId(int value)
{
    if (value > 0)
        this->_id = value;
}

std::string temp::Course::getName()
{
    return this->_name;
}

void temp::Course::setName(std::string value)
{
    this->_name = value;
}

uint8_t temp::Course::getCredits()
{
    return this->_credits;
}

void temp::Course::setCredits(uint8_t value)
{
    if (value > 0)
        this->_name = value;
}

std::string temp::Course::toString()
{
    return std::to_string(this->getId()) + " " + this->getName();
}
