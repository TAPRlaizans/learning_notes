
#include "log.hpp"

bool Log::test()
{

    // 初始化glog库
    google::InitGoogleLogging(argv[0]);
    
    // 打印日志消息
    LOG(INFO) << "This is an informational message.";
    LOG(WARNING) << "This is a warning message.";
    LOG(ERROR) << "This is an error message.";
    
    // 关闭glog库
    google::ShutdownGoogleLogging();
    
    return true;
                        
}
