#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "CBaseListener.h"
#include "CBaseVisitor.h"
#include "CLexer.h"
#include "CParser.h"
#define VISITOR 1 // 0 for listener, 1 for visitor

int main(int argc, const char *argv[])
{
    std::ifstream stream;
    stream.open(argv[1]);
    antlr4::ANTLRInputStream input(stream);
    CLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    CParser parser(&tokens);
    antlr4::tree::ParseTree *tree = parser.program();

    if (VISITOR)
    {
        CBaseVisitor visitor;
        visitor.visit(tree);
    }
    else
    {
        CBaseListener listener;
        antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    }

    //print the tree
    std::cout << tree->toStringTree(&parser) << std::endl;
    return 0;
}