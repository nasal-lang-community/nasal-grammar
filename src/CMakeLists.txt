# Define a library for the Nasal parser
add_library(NasalParserLib
    NasalLexer.cpp
    NasalParser.cpp
    NasalBaseListener.cpp
    NasalListener.cpp
)

# Include the ANTLR runtime directories and the directory where ANTLR generates headers
target_include_directories(NasalParserLib
    PUBLIC ${antlr4_SOURCE_DIR}/runtime/Cpp/runtime/src
    PUBLIC ${CMAKE_CURRENT_BINARY_DIR}  # This ensures the generated files (NasalLexer.h, etc.) are found
)

# Link the ANTLR runtime library
target_link_libraries(NasalParserLib antlr4_shared)