cmake_minimum_required(VERSION 3.25)
project(Chat)

set (EKCE "run")

set(SRC "main.cpp" "connection/connection.h" "connection/connection.cpp" "chat/chat.h" "chat/chat.cpp")

add_executable(${EKCE} ${SRC})

target_include_directories(${EKCE} PUBLIC "connection" PUBLIC "chat")