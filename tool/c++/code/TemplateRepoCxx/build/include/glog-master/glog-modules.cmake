cmake_policy (PUSH)
cmake_policy (SET CMP0057 NEW)

if (CMAKE_VERSION VERSION_LESS 3.3)
  message (FATAL_ERROR "glog-modules.cmake requires the consumer "
    "to use CMake 3.3 (or newer)")
endif (CMAKE_VERSION VERSION_LESS 3.3)

set (glog_MODULE_PATH "F:/code_project/Learn/tool/cmake/project_template/TemplateRepoCxx/build/include/glog-master/share/glog/cmake")
list (APPEND CMAKE_MODULE_PATH ${glog_MODULE_PATH})

if (NOT glog_MODULE_PATH IN_LIST CMAKE_MODULE_PATH)
  message (FATAL_ERROR "Cannot add '${glog_MODULE_PATH}' to "
    "CMAKE_MODULE_PATH. This will cause glog-config.cmake to fail at "
    "locating required find modules. Make sure CMAKE_MODULE_PATH is not a cache variable.")
endif (NOT glog_MODULE_PATH IN_LIST CMAKE_MODULE_PATH)

cmake_policy (POP)
