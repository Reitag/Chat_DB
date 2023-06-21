cmake_minimum_required(VERSION 3.25)
project(Chat)

#set(CMAKE_VERBOSE_MAKEFILE ON)

set (EKCE "run")

set(SRC "main.cpp" "mysql_api/mysql_api.h" "mysql_api/mysql_api.cpp" "connection/connection.h" "connection/connection.cpp" "chat/chat.h" "chat/chat.cpp")

#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_MYSQL_COMPILE_FLAGS}")

add_executable(${EKCE} ${SRC})

target_include_directories(${EKCE} PUBLIC "mysql_api" PUBLIC "connection" PUBLIC "chat")

execute_process(COMMAND mysql_config OUTPUT_VARIABLE MYSQL_CFLAGS OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND mysql_config OUTPUT_VARIABLE MYSQL_LIBS OUTPUT_STRIP_TRAILING_WHITESPACE)
target_compile_options(${EKCE} PUBLIC ${MYSQL_CFLAGS})
target_link_libraries(${EKCE} ${MYSQL_LIBS})


#list(CMAKE_MODULE_PATH APPEND "/home/ilya/Projects/Chat_DB/")
#find_package(MySQL REQUIRED)

#include_directories(${MYSQL_INCLUDE_DIR})
#target_link_libraries(${EKCE} ${MYSQL_LIB})