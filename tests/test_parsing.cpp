#include "antlr4-runtime.h"
#include "NasalLexer.h"
#include "NasalParser.h"
#include <fstream>
#include <iostream>
#include <gtest/gtest.h>

void parseNasalScript(const std::string& fileName, NasalParser& parser) {
    std::ifstream stream(fileName);
    if (!stream.is_open()) {
        std::cerr << "Could not open file: " << fileName << std::endl;
        throw std::runtime_error("Could not open file");
    }

    // Create an input stream for the script
    antlr4::ANTLRInputStream input(stream);

    // Create the lexer and token stream
    NasalLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    // Assign the token stream to the parser
    parser.setTokenStream(&tokens);

    // Parse the script (using the top-level rule from your grammar)
    NasalParser::ProgramContext* tree = parser.program();

    // Optionally check the parse tree
    ASSERT_NE(tree, nullptr) << "Parse tree is null.";
}

TEST(NasalParserTest, TestValidBooleanUsage1) {
    antlr4::CommonTokenStream tokens(nullptr);
    NasalParser parser(&tokens);

    parseNasalScript("../tests/nasal-validation-tests/booleans/valid_boolean_usage_1.nas", parser);

    ASSERT_EQ(parser.getNumberOfSyntaxErrors(), 0);
}

TEST(NasalParserTest, TestValidBooleanUsage2) {
    antlr4::CommonTokenStream tokens(nullptr);
    NasalParser parser(&tokens);

    parseNasalScript("../tests/nasal-validation-tests/booleans/valid_boolean_usage_2.nas", parser);

    ASSERT_EQ(parser.getNumberOfSyntaxErrors(), 0);
}

TEST(NasalParserTest, TestValidBooleanUsage3) {
    antlr4::CommonTokenStream tokens(nullptr);
    NasalParser parser(&tokens);

    parseNasalScript("../tests/nasal-validation-tests/booleans/valid_boolean_usage_3.nas", parser);

    ASSERT_EQ(parser.getNumberOfSyntaxErrors(), 0);
}

TEST(NasalParserTest, TestValidBooleanUsage4) {
    antlr4::CommonTokenStream tokens(nullptr);
    NasalParser parser(&tokens);

    parseNasalScript("../tests/nasal-validation-tests/booleans/valid_boolean_usage_4.nas", parser);

    ASSERT_EQ(parser.getNumberOfSyntaxErrors(), 0);
}

// Invalid usages of boolean 

TEST(NasalParserTest, TestInvalidBooleanUsage1) {
    antlr4::CommonTokenStream tokens(nullptr);
    NasalParser parser(&tokens);

    parseNasalScript("../tests/nasal-validation-tests/booleans/invalid_boolean_usage_1.nas", parser);

    ASSERT_EQ(parser.getNumberOfSyntaxErrors(), 1);
}

TEST(NasalParserTest, TestInvalidBooleanUsage2) {
    antlr4::CommonTokenStream tokens(nullptr);
    NasalParser parser(&tokens);

    parseNasalScript("../tests/nasal-validation-tests/booleans/invalid_boolean_usage_2.nas", parser);

    ASSERT_EQ(parser.getNumberOfSyntaxErrors(), 1);
}

// Valid assignment tests

TEST(NasalParserTest, TestValidAssignment1) {
    antlr4::CommonTokenStream tokens(nullptr);
    NasalParser parser(&tokens);

    parseNasalScript("../tests/nasal-validation-tests/assignment/valid_assignment_1.nas", parser);

    ASSERT_EQ(parser.getNumberOfSyntaxErrors(), 0);
}

TEST(NasalParserTest, TestValidAssignment2) {
    antlr4::CommonTokenStream tokens(nullptr);
    NasalParser parser(&tokens);

    parseNasalScript("../tests/nasal-validation-tests/assignment/valid_assignment_2.nas", parser);

    ASSERT_EQ(parser.getNumberOfSyntaxErrors(), 0);
}

TEST(NasalParserTest, TestValidAssignment3) {
    antlr4::CommonTokenStream tokens(nullptr);
    NasalParser parser(&tokens);

    parseNasalScript("../tests/nasal-validation-tests/assignment/valid_assignment_3.nas", parser);

    ASSERT_EQ(parser.getNumberOfSyntaxErrors(), 0);
}

TEST(NasalParserTest, TestValidAssignment4) {
    antlr4::CommonTokenStream tokens(nullptr);
    NasalParser parser(&tokens);

    parseNasalScript("../tests/nasal-validation-tests/assignment/valid_assignment_4.nas", parser);

    ASSERT_EQ(parser.getNumberOfSyntaxErrors(), 0);
}

TEST(NasalParserTest, TestValidAssignment5) {
    antlr4::CommonTokenStream tokens(nullptr);
    NasalParser parser(&tokens);

    parseNasalScript("../tests/nasal-validation-tests/assignment/valid_assignment_5.nas", parser);

    ASSERT_EQ(parser.getNumberOfSyntaxErrors(), 0);
}

TEST(NasalParserTest, TestValidAssignment6) {
    antlr4::CommonTokenStream tokens(nullptr);
    NasalParser parser(&tokens);

    parseNasalScript("../tests/nasal-validation-tests/assignment/valid_assignment_6.nas", parser);

    ASSERT_EQ(parser.getNumberOfSyntaxErrors(), 0);
}

// Invalid assignment tests

TEST(NasalParserTest, TestInvalidAssignment1) {
    antlr4::CommonTokenStream tokens(nullptr);
    NasalParser parser(&tokens);

    parseNasalScript("../tests/nasal-validation-tests/assignment/invalid_assignment_1.nas", parser);

    ASSERT_EQ(parser.getNumberOfSyntaxErrors(), 1);
}

TEST(NasalParserTest, TestInvalidAssignment2) {
    antlr4::CommonTokenStream tokens(nullptr);
    NasalParser parser(&tokens);

    parseNasalScript("../tests/nasal-validation-tests/assignment/invalid_assignment_2.nas", parser);

    ASSERT_EQ(parser.getNumberOfSyntaxErrors(), 1);
}