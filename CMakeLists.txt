project("Function_Templates_for_Array_Operations")
include_directories("include")
file(GLOB SRC "src/*.cpp" "src/*.cxx")
add_executable(${PROJECT_NAME} ${SRC}  "src/main.cpp")