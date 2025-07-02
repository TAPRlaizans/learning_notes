
# set(NAME_LIB ${CMAKE_CURRENT_SOURCE_DIR}) 
set(NAME_LIB log_test) 

add_library(${NAME_LIB} STATIC log_test.cpp) 

target_include_directories(${NAME_LIB} PUBLIC ${PROJECT_SOURCE_DIR}/include/${NAME_LIB})

target_link_libraries(${NAME_LIB} PRIVATE glog)
