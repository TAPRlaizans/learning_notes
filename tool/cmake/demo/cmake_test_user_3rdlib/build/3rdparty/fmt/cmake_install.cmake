# Install script for directory: F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/3rdparty/fmt

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/multi_folder")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "fmt_core" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/build/3rdparty/fmt/Debug/fmtd.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/build/3rdparty/fmt/Release/fmt.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/build/3rdparty/fmt/MinSizeRel/fmt.lib")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/build/3rdparty/fmt/RelWithDebInfo/fmt.lib")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "fmt_core" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/fmt" TYPE FILE FILES
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/3rdparty/fmt/include/fmt/args.h"
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/3rdparty/fmt/include/fmt/base.h"
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/3rdparty/fmt/include/fmt/chrono.h"
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/3rdparty/fmt/include/fmt/color.h"
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/3rdparty/fmt/include/fmt/compile.h"
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/3rdparty/fmt/include/fmt/core.h"
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/3rdparty/fmt/include/fmt/format.h"
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/3rdparty/fmt/include/fmt/format-inl.h"
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/3rdparty/fmt/include/fmt/os.h"
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/3rdparty/fmt/include/fmt/ostream.h"
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/3rdparty/fmt/include/fmt/printf.h"
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/3rdparty/fmt/include/fmt/ranges.h"
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/3rdparty/fmt/include/fmt/std.h"
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/3rdparty/fmt/include/fmt/xchar.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "fmt_core" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt" TYPE FILE FILES
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/build/3rdparty/fmt/fmt-config.cmake"
    "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/build/3rdparty/fmt/fmt-config-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "fmt_core" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt/fmt-targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt/fmt-targets.cmake"
         "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/build/3rdparty/fmt/CMakeFiles/Export/b834597d9b1628ff12ae4314c3a2e4b8/fmt-targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt/fmt-targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt/fmt-targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt" TYPE FILE FILES "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/build/3rdparty/fmt/CMakeFiles/Export/b834597d9b1628ff12ae4314c3a2e4b8/fmt-targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt" TYPE FILE FILES "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/build/3rdparty/fmt/CMakeFiles/Export/b834597d9b1628ff12ae4314c3a2e4b8/fmt-targets-debug.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt" TYPE FILE FILES "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/build/3rdparty/fmt/CMakeFiles/Export/b834597d9b1628ff12ae4314c3a2e4b8/fmt-targets-minsizerel.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt" TYPE FILE FILES "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/build/3rdparty/fmt/CMakeFiles/Export/b834597d9b1628ff12ae4314c3a2e4b8/fmt-targets-relwithdebinfo.cmake")
  endif()
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/fmt" TYPE FILE FILES "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/build/3rdparty/fmt/CMakeFiles/Export/b834597d9b1628ff12ae4314c3a2e4b8/fmt-targets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "fmt_core" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/build/3rdparty/fmt/fmt.pc")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "F:/code_project/Learn/工具学习/cmake/cmake_test_user_3rdlib/build/3rdparty/fmt/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
