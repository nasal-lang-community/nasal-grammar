
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

  virtual void enterAssignment(NasalParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(NasalParser::AssignmentContext *ctx) = 0;

  virtual void enterExpressionStatement(NasalParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(NasalParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterReturnStatement(NasalParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(NasalParser::ReturnStatementContext *ctx) = 0;

  virtual void enterIfStatement(NasalParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(NasalParser::IfStatementContext *ctx) = 0;

  virtual void enterElsifStatement(NasalParser::ElsifStatementContext *ctx) = 0;
  virtual void exitElsifStatement(NasalParser::ElsifStatementContext *ctx) = 0;

  virtual void enterElseStatement(NasalParser::ElseStatementContext *ctx) = 0;
  virtual void exitElseStatement(NasalParser::ElseStatementContext *ctx) = 0;

  virtual void enterExpression(NasalParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(NasalParser::ExpressionContext *ctx) = 0;

  virtual void enterFunctionExpression(NasalParser::FunctionExpressionContext *ctx) = 0;
  virtual void exitFunctionExpression(NasalParser::FunctionExpressionContext *ctx) = 0;

  virtual void enterParameterList(NasalParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(NasalParser::ParameterListContext *ctx) = 0;

  virtual void enterBlock(NasalParser::BlockContext *ctx) = 0;
  virtual void exitBlock(NasalParser::BlockContext *ctx) = 0;

  virtual void enterSimpleExpression(NasalParser::SimpleExpressionContext *ctx) = 0;
  virtual void exitSimpleExpression(NasalParser::SimpleExpressionContext *ctx) = 0;

  virtual void enterAssignmentExpression(NasalParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(NasalParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterLiteral(NasalParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(NasalParser::LiteralContext *ctx) = 0;

  virtual void enterBooleanLiteral(NasalParser::BooleanLiteralContext *ctx) = 0;
  virtual void exitBooleanLiteral(NasalParser::BooleanLiteralContext *ctx) = 0;

  virtual void enterBinaryOperator(NasalParser::BinaryOperatorContext *ctx) = 0;
  virtual void exitBinaryOperator(NasalParser::BinaryOperatorContext *ctx) = 0;


};

