#include "example.hpp"

temp::Example::Example()
{
    this->_test = 1;
}

temp::Example::~Example()
{
}

int temp::Example::getTestValue()
{
    return this->_test;
}

void temp::Example::setTestValue(int value)
{
    if (this->_test > 0)
        this->_test = value;
}
