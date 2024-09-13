# Define the test executable
add_executable(NasalParserTests test_parsing.cpp test_main.cpp)


# Fetch and link Google Test for unit testing
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1  # Adjust version if needed
)

FetchContent_MakeAvailable(googletest)

# Add include directories for Google Test
target_include_directories(NasalParserTests
    PRIVATE ${gtest_SOURCE_DIR}/include
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR}  # This ensures the generated ANTLR files (like NasalLexer.h) are found
    PRIVATE ${CMAKE_SOURCE_DIR}/src      # Include directory where NasalLexer.h, etc. are located
)

# Link the test executable to the parser library and Google Test
target_link_libraries(
    NasalParserTests 
    NasalParserLib 
    gtest 
    gtest_main
    antlr4_shared
)

# Enable testing in CMake
enable_testing()

# Add a test case using CTest
add_test(NAME ParsingTest COMMAND NasalParserTests)
