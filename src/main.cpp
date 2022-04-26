#include "example.hpp"
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    try
    {
        temp::Example example;
        std::cout << "Main is running .." << std::endl;
        std::string any = argc > example.getTestValue() ? std::to_string(argc - 1) : "No ";
        std::cout << any << " arguments received" << std::endl;
        if (argc > example.getTestValue())
        {
            std::cout << "[ ";
            for (int i = 1; i < argc; i++)
            {
                std::cout << argv[i] << (i < argc - 1 ? ", " : " ]");
            }
            std::cout << std::endl;
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
