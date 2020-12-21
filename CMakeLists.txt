cmake_minimum_required(VERSION 3.16)

project(coding_challenges)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(GTest REQUIRED)
include(GoogleTest)
enable_testing()

add_subdirectory(HashTable)
add_subdirectory(Numbers)
add_subdirectory(Sorts)
add_subdirectory(Strings)
add_subdirectory(Trees)

find_package(Doxygen)
if(DOXYGEN_FOUND)
    set(DOXYGEN_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/doc)
    set(DOXYGEN_BUILTIN_STL_SUPPORT YES)
    set(DOXYGEN_SHOW_INCLUDE_FILES NO)
    set(DOXYGEN_HAVE_DOT NO)

    doxygen_add_docs(doc)
endif(DOXYGEN_FOUND)
