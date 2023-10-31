#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "frontend/SysYBaseVisitor.h"
#include "frontend/SysYLexer.h"
#include "frontend/SysYParser.h"
#define VISITOR 1 // 0 for listener, 1 for visitor

using namespace antlr4;
using namespace tree;
using namespace std;


int main(int argc, const char *argv[])
{
    ifstream stream;
    stream.open(argv[1]);
    ANTLRInputStream input(stream);
    SysYLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    SysYParser parser(&tokens);
    ParseTree *tree = parser.compUnit();
    if (VISITOR)
    {
        SysYBaseVisitor visitor;
        visitor.visit(tree);
    }
    else
    {
        // CBaseListener listener;
        // tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    }
    cout << tree->toStringTree(&parser,true) << endl;
    return 0;
}