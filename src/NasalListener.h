
// Generated from src/Nasal.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NasalParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by NasalParser.
 */
class  NasalListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(NasalParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(NasalParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(NasalParser::StatementContext *ctx) = 0;
  virtual void exitStatement(NasalParser::StatementContext *ctx) = 0;

  virtual void enterVarDeclaration(NasalParser::VarDeclarationContext *ctx) = 0;
  virtual void exitVarDeclaration(NasalParser::VarDeclarationContext *ctx) = 0;

  virtual void enterFuncDeclaration(NasalParser::FuncDeclarationContext *ctx) = 0;
  virtual void exitFuncDeclaration(NasalParser::FuncDeclarationContext *ctx) = 0;

  virtual void enterIfStatement(NasalParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(NasalParser::IfStatementContext *ctx) = 0;

  virtual void enterReturnStatement(NasalParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(NasalParser::ReturnStatementContext *ctx) = 0;

  virtual void enterExpression(NasalParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(NasalParser::ExpressionContext *ctx) = 0;


};

