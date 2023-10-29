#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "CBaseListener.h"
#include "CLexer.h"
#include "CParser.h"

class MyListener : public CBaseListener
{
public:
    void enterProgram(CParser::ProgramContext *ctx) override
    {
        std::cout << "Program Start" << std::endl;
    }

    void exitProgram(CParser::ProgramContext *ctx) override
    {
        std::cout << "Program End" << std::endl;
    }
};

int main(int argc, const char *argv[])
{
    std::ifstream stream;
    stream.open(argv[1]);
    antlr4::ANTLRInputStream input(stream);
    CLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    CParser parser(&tokens);
    antlr4::tree::ParseTree *tree = parser.program();
    MyListener listener;
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    return 0;
}