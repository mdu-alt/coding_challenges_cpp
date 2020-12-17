cmake_minimum_required(VERSION 3.16)

project(coding_challenges)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(GTest)
include(GoogleTest)

enable_testing()
add_subdirectory(BinaryTreeHeight)
add_subdirectory(GroupAnagrams)
add_subdirectory(HashTable)
add_subdirectory(LargestBinaryGap)
add_subdirectory(Sorts)
