
// Generated from src/Nasal.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NasalListener.h"


/**
 * This class provides an empty implementation of NasalListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  NasalBaseListener : public NasalListener {
public:

  virtual void enterProgram(NasalParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(NasalParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(NasalParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(NasalParser::StatementContext * /*ctx*/) override { }

  virtual void enterVarDeclaration(NasalParser::VarDeclarationContext * /*ctx*/) override { }
  virtual void exitVarDeclaration(NasalParser::VarDeclarationContext * /*ctx*/) override { }

  virtual void enterAssignment(NasalParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(NasalParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(NasalParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(NasalParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(NasalParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(NasalParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(NasalParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(NasalParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterElsifStatement(NasalParser::ElsifStatementContext * /*ctx*/) override { }
  virtual void exitElsifStatement(NasalParser::ElsifStatementContext * /*ctx*/) override { }

  virtual void enterElseStatement(NasalParser::ElseStatementContext * /*ctx*/) override { }
  virtual void exitElseStatement(NasalParser::ElseStatementContext * /*ctx*/) override { }

  virtual void enterExpression(NasalParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(NasalParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterFunctionExpression(NasalParser::FunctionExpressionContext * /*ctx*/) override { }
  virtual void exitFunctionExpression(NasalParser::FunctionExpressionContext * /*ctx*/) override { }

  virtual void enterParameterList(NasalParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(NasalParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterBlock(NasalParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(NasalParser::BlockContext * /*ctx*/) override { }

  virtual void enterSimpleExpression(NasalParser::SimpleExpressionContext * /*ctx*/) override { }
  virtual void exitSimpleExpression(NasalParser::SimpleExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(NasalParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(NasalParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterLiteral(NasalParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(NasalParser::LiteralContext * /*ctx*/) override { }

  virtual void enterBooleanLiteral(NasalParser::BooleanLiteralContext * /*ctx*/) override { }
  virtual void exitBooleanLiteral(NasalParser::BooleanLiteralContext * /*ctx*/) override { }

  virtual void enterBinaryOperator(NasalParser::BinaryOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryOperator(NasalParser::BinaryOperatorContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

