cmake_minimum_required(VERSION 3.16)

project(coding_challenges)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(GTest REQUIRED)
include(GoogleTest)
enable_testing()

add_subdirectory(arrays)
add_subdirectory(data_structures)
add_subdirectory(design)
add_subdirectory(lists)
add_subdirectory(numbers)
add_subdirectory(sorts)
add_subdirectory(strings)
add_subdirectory(trees)

find_package(Doxygen)
if(DOXYGEN_FOUND)
    set(DOXYGEN_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/doc)
    set(DOXYGEN_BUILTIN_STL_SUPPORT YES)
    set(DOXYGEN_SHOW_INCLUDE_FILES NO)
    set(DOXYGEN_HAVE_DOT NO)
    set(DOXYGEN_STRIP_CODE_COMMENTS NO)
    set(DOXYGEN_USE_MATHJAX YES)

    doxygen_add_docs(doc)
endif(DOXYGEN_FOUND)
