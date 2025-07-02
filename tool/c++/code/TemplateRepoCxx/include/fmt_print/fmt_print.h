
#pragma once
#include <string>
#include <iostream>

class fmt_print {
public:
    static void print(const std::string& msg) {
        std::cout << msg << std::endl;
    }
};