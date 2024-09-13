cmake_minimum_required(VERSION 3.14)
project(NasalParser)

# Suppress developer warnings from the ANTLR repo 
set(CMAKE_SUPPRESS_DEVELOPER_WARNINGS TRUE)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build (Debug or Release)" FORCE)
endif()

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Fetch ANTLR runtime for C++
include(FetchContent)

FetchContent_Declare(
    antlr4
    GIT_REPOSITORY https://github.com/antlr/antlr4.git
    GIT_TAG 4.13.2
    SOURCE_SUBDIR runtime/Cpp
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)

FetchContent_MakeAvailable(antlr4)

# Add the src directory
add_subdirectory(src)

# Add the test directory for testing
add_subdirectory(tests)