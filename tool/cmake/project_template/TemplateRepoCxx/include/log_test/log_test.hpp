#pragma once 
#include <string>

class Log
{
public:
    
    // bool test();
    bool init();
    bool log(std::string level, std::string msg);
    bool close();

private:
    
};