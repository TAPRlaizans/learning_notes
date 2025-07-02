#include "hello.hpp"

int hello(int loop_time)
{
    for (int i = 0; i < loop_time; i++)
    {
        std::cout << "Hello, world!"<< i << std::endl;
    }
    return true;
}