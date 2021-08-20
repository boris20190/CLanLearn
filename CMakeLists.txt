cmake_minimum_required(VERSION 3.20)
project(CLanLearn C)

set(CMAKE_C_STANDARD 11)

add_executable(new LeetCode/new.c)
add_executable(NodeList LeetCode/NodeList.c)
add_executable(huffman Algorithm/huffman.c)
add_executable(BaseLearn BaseLearn/LinkList.c)
