
// Generated from C.g4 by ANTLR 4.13.1


#include "CLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CLexerStaticData final {
  CLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CLexerStaticData(const CLexerStaticData&) = delete;
  CLexerStaticData(CLexerStaticData&&) = delete;
  CLexerStaticData& operator=(const CLexerStaticData&) = delete;
  CLexerStaticData& operator=(CLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag clexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CLexerStaticData *clexerLexerStaticData = nullptr;

void clexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (clexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(clexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "ID", "INT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'int'", "';'", "'='", "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "ID", "INT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,8,46,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	2,7,7,7,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,4,5,31,8,
  	5,11,5,12,5,32,1,6,4,6,36,8,6,11,6,12,6,37,1,7,4,7,41,8,7,11,7,12,7,42,
  	1,7,1,7,0,0,8,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,1,0,3,3,0,65,90,95,95,
  	97,122,1,0,48,57,3,0,9,10,13,13,32,32,48,0,1,1,0,0,0,0,3,1,0,0,0,0,5,
  	1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,
  	0,1,17,1,0,0,0,3,21,1,0,0,0,5,23,1,0,0,0,7,25,1,0,0,0,9,27,1,0,0,0,11,
  	30,1,0,0,0,13,35,1,0,0,0,15,40,1,0,0,0,17,18,5,105,0,0,18,19,5,110,0,
  	0,19,20,5,116,0,0,20,2,1,0,0,0,21,22,5,59,0,0,22,4,1,0,0,0,23,24,5,61,
  	0,0,24,6,1,0,0,0,25,26,5,43,0,0,26,8,1,0,0,0,27,28,5,45,0,0,28,10,1,0,
  	0,0,29,31,7,0,0,0,30,29,1,0,0,0,31,32,1,0,0,0,32,30,1,0,0,0,32,33,1,0,
  	0,0,33,12,1,0,0,0,34,36,7,1,0,0,35,34,1,0,0,0,36,37,1,0,0,0,37,35,1,0,
  	0,0,37,38,1,0,0,0,38,14,1,0,0,0,39,41,7,2,0,0,40,39,1,0,0,0,41,42,1,0,
  	0,0,42,40,1,0,0,0,42,43,1,0,0,0,43,44,1,0,0,0,44,45,6,7,0,0,45,16,1,0,
  	0,0,4,0,32,37,42,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  clexerLexerStaticData = staticData.release();
}

}

CLexer::CLexer(CharStream *input) : Lexer(input) {
  CLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *clexerLexerStaticData->atn, clexerLexerStaticData->decisionToDFA, clexerLexerStaticData->sharedContextCache);
}

CLexer::~CLexer() {
  delete _interpreter;
}

std::string CLexer::getGrammarFileName() const {
  return "C.g4";
}

const std::vector<std::string>& CLexer::getRuleNames() const {
  return clexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& CLexer::getChannelNames() const {
  return clexerLexerStaticData->channelNames;
}

const std::vector<std::string>& CLexer::getModeNames() const {
  return clexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& CLexer::getVocabulary() const {
  return clexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CLexer::getSerializedATN() const {
  return clexerLexerStaticData->serializedATN;
}

const atn::ATN& CLexer::getATN() const {
  return *clexerLexerStaticData->atn;
}




void CLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  clexerLexerInitialize();
#else
  ::antlr4::internal::call_once(clexerLexerOnceFlag, clexerLexerInitialize);
#endif
}
