
// Generated from C.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CVisitor.h"


/**
 * This class provides an empty implementation of CVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CBaseVisitor : public CVisitor {
public:

  virtual std::any visitProgram(CParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryExpression(CParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGenericSelection(CParser::GenericSelectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGenericAssocList(CParser::GenericAssocListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGenericAssociation(CParser::GenericAssociationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfixExpression(CParser::PostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgumentExpressionList(CParser::ArgumentExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExpression(CParser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryOperator(CParser::UnaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCastExpression(CParser::CastExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicativeExpression(CParser::MultiplicativeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditiveExpression(CParser::AdditiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShiftExpression(CParser::ShiftExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalExpression(CParser::RelationalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqualityExpression(CParser::EqualityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndExpression(CParser::AndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExclusiveOrExpression(CParser::ExclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInclusiveOrExpression(CParser::InclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalAndExpression(CParser::LogicalAndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalOrExpression(CParser::LogicalOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditionalExpression(CParser::ConditionalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentExpression(CParser::AssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentOperator(CParser::AssignmentOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(CParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantExpression(CParser::ConstantExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(CParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationSpecifiers(CParser::DeclarationSpecifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationSpecifiers2(CParser::DeclarationSpecifiers2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationSpecifier(CParser::DeclarationSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitDeclaratorList(CParser::InitDeclaratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitDeclarator(CParser::InitDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStorageClassSpecifier(CParser::StorageClassSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecifier(CParser::TypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructOrUnionSpecifier(CParser::StructOrUnionSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructOrUnion(CParser::StructOrUnionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructDeclarationList(CParser::StructDeclarationListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructDeclaration(CParser::StructDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSpecifierQualifierList(CParser::SpecifierQualifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructDeclaratorList(CParser::StructDeclaratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructDeclarator(CParser::StructDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumSpecifier(CParser::EnumSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumeratorList(CParser::EnumeratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumerator(CParser::EnumeratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumerationConstant(CParser::EnumerationConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomicTypeSpecifier(CParser::AtomicTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeQualifier(CParser::TypeQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionSpecifier(CParser::FunctionSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlignmentSpecifier(CParser::AlignmentSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarator(CParser::DeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDirectDeclarator(CParser::DirectDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVcSpecificModifer(CParser::VcSpecificModiferContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGccDeclaratorExtension(CParser::GccDeclaratorExtensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGccAttributeSpecifier(CParser::GccAttributeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGccAttributeList(CParser::GccAttributeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGccAttribute(CParser::GccAttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNestedParenthesesBlock(CParser::NestedParenthesesBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointer(CParser::PointerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeQualifierList(CParser::TypeQualifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterTypeList(CParser::ParameterTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(CParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterDeclaration(CParser::ParameterDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierList(CParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeName(CParser::TypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbstractDeclarator(CParser::AbstractDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDirectAbstractDeclarator(CParser::DirectAbstractDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypedefName(CParser::TypedefNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializer(CParser::InitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializerList(CParser::InitializerListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDesignation(CParser::DesignationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDesignatorList(CParser::DesignatorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDesignator(CParser::DesignatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStaticAssertDeclaration(CParser::StaticAssertDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(CParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabeledStatement(CParser::LabeledStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundStatement(CParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockItemList(CParser::BlockItemListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockItem(CParser::BlockItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionStatement(CParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectionStatement(CParser::SelectionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIterationStatement(CParser::IterationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForCondition(CParser::ForConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForDeclaration(CParser::ForDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForExpression(CParser::ForExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJumpStatement(CParser::JumpStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompilationUnit(CParser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTranslationUnit(CParser::TranslationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternalDeclaration(CParser::ExternalDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDefinition(CParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationList(CParser::DeclarationListContext *ctx) override {
    return visitChildren(ctx);
  }


};

