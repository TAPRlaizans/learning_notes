
# set(NAME_LIB ${CMAKE_CURRENT_SOURCE_DIR}) 
set(NAME_LIB log) 

add_library(${NAME_LIB} log.cpp) 
target_link_libraries(${NAME_LIB} PRIVATE glog)

target_include_directories(${NAME_LIB} PUBLIC ${PROJECT_SOURCE_DIR}/include/${NAME_LIB})
