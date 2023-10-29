
// Generated from C.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CListener.h"


/**
 * This class provides an empty implementation of CListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CBaseListener : public CListener {
public:

  virtual void enterProgram(CParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(CParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(CParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(CParser::StatementContext * /*ctx*/) override { }

  virtual void enterDeclaration(CParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(CParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterAssignment(CParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(CParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterExpression(CParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(CParser::ExpressionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

