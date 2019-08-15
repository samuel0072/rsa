cmake_minimum_required()
project(rsa C)
set(EXECUTABLE_NAME rsa)

#set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -std=c99")

set(SOURCE_FILES
    ${PROJECT_SOURCE_DIR}/rsa.c)

add_executable(${EXECUTABLE_NAME} ${SOURCE_FILES})

target_link_libraries(${EXECUTABLE_NAME} m)