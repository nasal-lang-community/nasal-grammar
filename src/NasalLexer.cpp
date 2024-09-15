
// Generated from src/Nasal.g4 by ANTLR 4.13.2


#include "NasalLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct NasalLexerStaticData final {
  NasalLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NasalLexerStaticData(const NasalLexerStaticData&) = delete;
  NasalLexerStaticData(NasalLexerStaticData&&) = delete;
  NasalLexerStaticData& operator=(const NasalLexerStaticData&) = delete;
  NasalLexerStaticData& operator=(NasalLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag nasallexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<NasalLexerStaticData> nasallexerLexerStaticData = nullptr;

void nasallexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (nasallexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(nasallexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<NasalLexerStaticData>(
    std::vector<std::string>{
      "VAR", "FUNC", "IF", "ELSIF", "ELSE", "RETURN", "TRUE", "FALSE", "NIL", 
      "ID", "NUMBER", "STRING", "WS", "ASSIGN", "PLUS", "MINUS", "MULT", 
      "DIV", "EQ", "NEQ", "GT", "LT", "GTE", "LTE", "NOT", "LPAREN", "RPAREN", 
      "LBRACE", "RBRACE", "SEMICOLON", "COMMA", "COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'var'", "'func'", "'if'", "'elsif'", "'else'", "'return'", "'true'", 
      "'false'", "'nil'", "", "", "", "", "'='", "'+'", "'-'", "'*'", "'/'", 
      "'=='", "'!='", "'>'", "'<'", "'>='", "'<='", "'!'", "'('", "')'", 
      "'{'", "'}'", "';'", "','"
    },
    std::vector<std::string>{
      "", "VAR", "FUNC", "IF", "ELSIF", "ELSE", "RETURN", "TRUE", "FALSE", 
      "NIL", "ID", "NUMBER", "STRING", "WS", "ASSIGN", "PLUS", "MINUS", 
      "MULT", "DIV", "EQ", "NEQ", "GT", "LT", "GTE", "LTE", "NOT", "LPAREN", 
      "RPAREN", "LBRACE", "RBRACE", "SEMICOLON", "COMMA", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,32,187,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,
  	1,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,
  	1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,
  	8,1,8,1,9,1,9,5,9,113,8,9,10,9,12,9,116,9,9,1,10,4,10,119,8,10,11,10,
  	12,10,120,1,11,1,11,5,11,125,8,11,10,11,12,11,128,9,11,1,11,1,11,1,12,
  	4,12,133,8,12,11,12,12,12,134,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,
  	1,16,1,16,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,21,1,21,
  	1,22,1,22,1,22,1,23,1,23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,
  	1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,5,31,181,8,31,10,31,12,31,184,
  	9,31,1,31,1,31,1,126,0,32,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,
  	10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,
  	43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,1,0,
  	5,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,9,
  	10,13,13,32,32,2,0,10,10,13,13,191,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,
  	0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,
  	1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,
  	0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,
  	0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,
  	1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,
  	0,0,0,61,1,0,0,0,0,63,1,0,0,0,1,65,1,0,0,0,3,69,1,0,0,0,5,74,1,0,0,0,
  	7,77,1,0,0,0,9,83,1,0,0,0,11,88,1,0,0,0,13,95,1,0,0,0,15,100,1,0,0,0,
  	17,106,1,0,0,0,19,110,1,0,0,0,21,118,1,0,0,0,23,122,1,0,0,0,25,132,1,
  	0,0,0,27,138,1,0,0,0,29,140,1,0,0,0,31,142,1,0,0,0,33,144,1,0,0,0,35,
  	146,1,0,0,0,37,148,1,0,0,0,39,151,1,0,0,0,41,154,1,0,0,0,43,156,1,0,0,
  	0,45,158,1,0,0,0,47,161,1,0,0,0,49,164,1,0,0,0,51,166,1,0,0,0,53,168,
  	1,0,0,0,55,170,1,0,0,0,57,172,1,0,0,0,59,174,1,0,0,0,61,176,1,0,0,0,63,
  	178,1,0,0,0,65,66,5,118,0,0,66,67,5,97,0,0,67,68,5,114,0,0,68,2,1,0,0,
  	0,69,70,5,102,0,0,70,71,5,117,0,0,71,72,5,110,0,0,72,73,5,99,0,0,73,4,
  	1,0,0,0,74,75,5,105,0,0,75,76,5,102,0,0,76,6,1,0,0,0,77,78,5,101,0,0,
  	78,79,5,108,0,0,79,80,5,115,0,0,80,81,5,105,0,0,81,82,5,102,0,0,82,8,
  	1,0,0,0,83,84,5,101,0,0,84,85,5,108,0,0,85,86,5,115,0,0,86,87,5,101,0,
  	0,87,10,1,0,0,0,88,89,5,114,0,0,89,90,5,101,0,0,90,91,5,116,0,0,91,92,
  	5,117,0,0,92,93,5,114,0,0,93,94,5,110,0,0,94,12,1,0,0,0,95,96,5,116,0,
  	0,96,97,5,114,0,0,97,98,5,117,0,0,98,99,5,101,0,0,99,14,1,0,0,0,100,101,
  	5,102,0,0,101,102,5,97,0,0,102,103,5,108,0,0,103,104,5,115,0,0,104,105,
  	5,101,0,0,105,16,1,0,0,0,106,107,5,110,0,0,107,108,5,105,0,0,108,109,
  	5,108,0,0,109,18,1,0,0,0,110,114,7,0,0,0,111,113,7,1,0,0,112,111,1,0,
  	0,0,113,116,1,0,0,0,114,112,1,0,0,0,114,115,1,0,0,0,115,20,1,0,0,0,116,
  	114,1,0,0,0,117,119,7,2,0,0,118,117,1,0,0,0,119,120,1,0,0,0,120,118,1,
  	0,0,0,120,121,1,0,0,0,121,22,1,0,0,0,122,126,5,34,0,0,123,125,9,0,0,0,
  	124,123,1,0,0,0,125,128,1,0,0,0,126,127,1,0,0,0,126,124,1,0,0,0,127,129,
  	1,0,0,0,128,126,1,0,0,0,129,130,5,34,0,0,130,24,1,0,0,0,131,133,7,3,0,
  	0,132,131,1,0,0,0,133,134,1,0,0,0,134,132,1,0,0,0,134,135,1,0,0,0,135,
  	136,1,0,0,0,136,137,6,12,0,0,137,26,1,0,0,0,138,139,5,61,0,0,139,28,1,
  	0,0,0,140,141,5,43,0,0,141,30,1,0,0,0,142,143,5,45,0,0,143,32,1,0,0,0,
  	144,145,5,42,0,0,145,34,1,0,0,0,146,147,5,47,0,0,147,36,1,0,0,0,148,149,
  	5,61,0,0,149,150,5,61,0,0,150,38,1,0,0,0,151,152,5,33,0,0,152,153,5,61,
  	0,0,153,40,1,0,0,0,154,155,5,62,0,0,155,42,1,0,0,0,156,157,5,60,0,0,157,
  	44,1,0,0,0,158,159,5,62,0,0,159,160,5,61,0,0,160,46,1,0,0,0,161,162,5,
  	60,0,0,162,163,5,61,0,0,163,48,1,0,0,0,164,165,5,33,0,0,165,50,1,0,0,
  	0,166,167,5,40,0,0,167,52,1,0,0,0,168,169,5,41,0,0,169,54,1,0,0,0,170,
  	171,5,123,0,0,171,56,1,0,0,0,172,173,5,125,0,0,173,58,1,0,0,0,174,175,
  	5,59,0,0,175,60,1,0,0,0,176,177,5,44,0,0,177,62,1,0,0,0,178,182,5,35,
  	0,0,179,181,8,4,0,0,180,179,1,0,0,0,181,184,1,0,0,0,182,180,1,0,0,0,182,
  	183,1,0,0,0,183,185,1,0,0,0,184,182,1,0,0,0,185,186,6,31,0,0,186,64,1,
  	0,0,0,6,0,114,120,126,134,182,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  nasallexerLexerStaticData = std::move(staticData);
}

}

NasalLexer::NasalLexer(CharStream *input) : Lexer(input) {
  NasalLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *nasallexerLexerStaticData->atn, nasallexerLexerStaticData->decisionToDFA, nasallexerLexerStaticData->sharedContextCache);
}

NasalLexer::~NasalLexer() {
  delete _interpreter;
}

std::string NasalLexer::getGrammarFileName() const {
  return "Nasal.g4";
}

const std::vector<std::string>& NasalLexer::getRuleNames() const {
  return nasallexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& NasalLexer::getChannelNames() const {
  return nasallexerLexerStaticData->channelNames;
}

const std::vector<std::string>& NasalLexer::getModeNames() const {
  return nasallexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& NasalLexer::getVocabulary() const {
  return nasallexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NasalLexer::getSerializedATN() const {
  return nasallexerLexerStaticData->serializedATN;
}

const atn::ATN& NasalLexer::getATN() const {
  return *nasallexerLexerStaticData->atn;
}




void NasalLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  nasallexerLexerInitialize();
#else
  ::antlr4::internal::call_once(nasallexerLexerOnceFlag, nasallexerLexerInitialize);
#endif
}
