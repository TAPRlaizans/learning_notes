
set(NAME_LIB fmt_print) 
add_library(${NAME_LIB} hello.cpp) #将当前路径下的hello.cpp文件编译成hello库

target_include_directories(${NAME_LIB} PUBLIC ${PROJECT_SOURCE_DIR}/include/${NAME_LIB})