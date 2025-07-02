
#include "log_test.hpp"
#include "glog/logging.h"

// bool Log::test()
// {
    
    // google::InitGoogleLogging("");
    
//     LOG(INFO) << "This is an informational message.";
//     LOG(WARNING) << "This is a warning message.";
//     LOG(ERROR) << "This is an error message.";
    
//     google::ShutdownGoogleLogging();
    
//     return true;
                        
// }

bool Log::init()
{
    google::InitGoogleLogging("");
    return true;
}
bool Log::log(std::string level, std::string msg)
{
    LOG(INFO) << "This is an informational message.";
    LOG(WARNING) << "This is a warning message.";
    LOG(ERROR) << "This is an error message."; 
    return true;
}
bool Log::close()
{
    google::ShutdownGoogleLogging();
    return true;
}