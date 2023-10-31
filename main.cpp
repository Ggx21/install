#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "CBaseVisitor.h"
#include "CLexer.h"
#include "CParser.h"
#define VISITOR 1 // 0 for listener, 1 for visitor

using namespace antlr4;
using namespace tree;
using namespace std;


int main(int argc, const char *argv[])
{
    ifstream stream;
    stream.open(argv[1]);
    ANTLRInputStream input(stream);
    CLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    CParser parser(&tokens);
    tree::ParseTree *tree = parser.compilationUnit();
    if (VISITOR)
    {
        CBaseVisitor visitor;
        visitor.visit(tree);
    }
    else
    {
        // CBaseListener listener;
        // tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    }
    cout << tree->toStringTree(&parser) << endl;
    return 0;
}