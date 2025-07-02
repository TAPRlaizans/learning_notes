#include <iostream>
#include "hello.hpp"
#include "fmt/core.h"

int main()
{

    // 定义颜色代码
    struct color 
    {
        const char* RESET = "\033[0m";
        const char* RED = "\033[31m";
        const char* GREEN = "\033[32m";
        const char* YELLOW = "\033[33m";
        const char* BLUE = "\033[34m";
        const char* MAGENTA = "\033[35m";
        const char* CYAN = "\033[36m";
        const char* WHITE = "\033[37m";
    };

    // 调用函数
    color c;
    std::cout << "use 3rd party library" << std::endl;
    fmt::print("{}This is red text.{}\n", c.RED, c.RESET);
    return 0;
}