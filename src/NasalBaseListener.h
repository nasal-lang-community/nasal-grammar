
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

  virtual void enterFuncDeclaration(NasalParser::FuncDeclarationContext * /*ctx*/) override { }
  virtual void exitFuncDeclaration(NasalParser::FuncDeclarationContext * /*ctx*/) override { }

  virtual void enterIfStatement(NasalParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(NasalParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(NasalParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(NasalParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterExpression(NasalParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(NasalParser::ExpressionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

