# for each "src/x.cpp", generate target "x"
include_directories(${PROJECT_SOURCE_DIR}/include)
add_subdirectory(${PROJECT_SOURCE_DIR}/include ${CMAKE_BINARY_DIR}/include) 
file(GLOB_RECURSE all_srcs CONFIGURE_DEPENDS *.cpp)
foreach(v ${all_srcs})
    string(REGEX MATCH "src/.*" relative_path ${v})
    # message(${relative_path})
    string(REGEX REPLACE "src/" "" target_name ${relative_path})
    string(REGEX REPLACE ".cpp" "" target_name ${target_name})

    add_executable(${target_name} ${v})
    target_include_directories(${target_name} PRIVATE ${PROJECT_SOURCE_DIR}/include)
    target_link_libraries(${target_name} PRIVATE log_test)
endforeach()
