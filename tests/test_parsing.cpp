#include "antlr4-runtime.h"
#include "NasalLexer.h"
#include "NasalParser.h"
#include <fstream>
#include <iostream>
#include <gtest/gtest.h>

void parseNasalScript(const std::string& fileName) {
    std::ifstream stream(fileName);
    if (!stream.is_open()) {
        std::cerr << "Could not open file: " << fileName << std::endl;
        return;
    }

    // Create an input stream for the script
    antlr4::ANTLRInputStream input(stream);

    // Create the lexer and token stream
    NasalLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    // Create the parser
    NasalParser parser(&tokens);

    // Parse the script (using the top-level rule from your grammar)
    NasalParser::ProgramContext* tree = parser.program();

    // Display the parse tree
    std::cout << "Parse successful for file: " << fileName << std::endl;
    std::cout << "Parse tree: " << tree->toStringTree(&parser) << std::endl;

    // Check for lexer errors
    ASSERT_EQ(lexer.getNumberOfSyntaxErrors(), 0) << "Lexer encountered syntax errors.";

    // Check for parser errors
    ASSERT_EQ(parser.getNumberOfSyntaxErrors(), 0) << "Parser encountered syntax errors.";

    // Optionally check the parse tree
    ASSERT_NE(tree, nullptr) << "Parse tree is null.";
}

// Use Google Test's TEST macro for defining the test
TEST(NasalParserTest, TestNasalScriptParsing) {
    // Path to the test script (adjust if necessary)
    std::string testScriptPath = "../tests/test_script.nas";

    // Parse the test script and ensure it doesn't crash or produce errors
    parseNasalScript(testScriptPath);
}
