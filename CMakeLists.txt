cmake_minimum_required(VERSION 3.20)
project(CLanLearn C)

set(CMAKE_C_STANDARD 11)

add_executable(BaseLearn BaseLearn/LinkList.c)
add_executable(BubbleSort SortingAlgorithm/BubbleSort.c)
add_executable(random_number BaseLearn/RandomNumber.c)


