
// Generated from C.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CParser.
 */
class  CListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(CParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(CParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(CParser::StatementContext *ctx) = 0;
  virtual void exitStatement(CParser::StatementContext *ctx) = 0;

  virtual void enterDeclaration(CParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(CParser::DeclarationContext *ctx) = 0;

  virtual void enterAssignment(CParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(CParser::AssignmentContext *ctx) = 0;

  virtual void enterExpression(CParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(CParser::ExpressionContext *ctx) = 0;


};

