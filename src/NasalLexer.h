
// Generated from src/Nasal.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  NasalLexer : public antlr4::Lexer {
public:
  enum {
    VAR = 1, FUNC = 2, IF = 3, ELSIF = 4, ELSE = 5, RETURN = 6, TRUE = 7, 
    FALSE = 8, NIL = 9, ID = 10, NUMBER = 11, STRING = 12, WS = 13, ASSIGN = 14, 
    PLUS = 15, MINUS = 16, MULT = 17, DIV = 18, EQ = 19, NEQ = 20, GT = 21, 
    LT = 22, GTE = 23, LTE = 24, NOT = 25, LPAREN = 26, RPAREN = 27, LBRACE = 28, 
    RBRACE = 29, SEMICOLON = 30, COMMA = 31, COMMENT = 32
  };

  explicit NasalLexer(antlr4::CharStream *input);

  ~NasalLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

