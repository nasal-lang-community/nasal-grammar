
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
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "VAR", "FUNC", 
      "IF", "ELSE", "RETURN", "NUMBER", "STRING", "ID", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "';'", "'('", "','", "')'", "'{'", "'}'", "'var'", "'func'", 
      "'if'", "'else'", "'return'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "VAR", "FUNC", "IF", "ELSE", "RETURN", 
      "NUMBER", "STRING", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,16,99,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,
  	6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,10,
  	1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,4,12,73,8,12,11,12,12,12,
  	74,1,13,1,13,5,13,79,8,13,10,13,12,13,82,9,13,1,13,1,13,1,14,1,14,5,14,
  	88,8,14,10,14,12,14,91,9,14,1,15,4,15,94,8,15,11,15,12,15,95,1,15,1,15,
  	1,80,0,16,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,
  	13,27,14,29,15,31,16,1,0,4,1,0,48,57,3,0,65,90,95,95,97,122,4,0,48,57,
  	65,90,95,95,97,122,3,0,9,10,13,13,32,32,102,0,1,1,0,0,0,0,3,1,0,0,0,0,
  	5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,
  	0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,
  	0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,1,33,1,0,0,0,3,35,1,0,0,0,5,37,
  	1,0,0,0,7,39,1,0,0,0,9,41,1,0,0,0,11,43,1,0,0,0,13,45,1,0,0,0,15,47,1,
  	0,0,0,17,51,1,0,0,0,19,56,1,0,0,0,21,59,1,0,0,0,23,64,1,0,0,0,25,72,1,
  	0,0,0,27,76,1,0,0,0,29,85,1,0,0,0,31,93,1,0,0,0,33,34,5,61,0,0,34,2,1,
  	0,0,0,35,36,5,59,0,0,36,4,1,0,0,0,37,38,5,40,0,0,38,6,1,0,0,0,39,40,5,
  	44,0,0,40,8,1,0,0,0,41,42,5,41,0,0,42,10,1,0,0,0,43,44,5,123,0,0,44,12,
  	1,0,0,0,45,46,5,125,0,0,46,14,1,0,0,0,47,48,5,118,0,0,48,49,5,97,0,0,
  	49,50,5,114,0,0,50,16,1,0,0,0,51,52,5,102,0,0,52,53,5,117,0,0,53,54,5,
  	110,0,0,54,55,5,99,0,0,55,18,1,0,0,0,56,57,5,105,0,0,57,58,5,102,0,0,
  	58,20,1,0,0,0,59,60,5,101,0,0,60,61,5,108,0,0,61,62,5,115,0,0,62,63,5,
  	101,0,0,63,22,1,0,0,0,64,65,5,114,0,0,65,66,5,101,0,0,66,67,5,116,0,0,
  	67,68,5,117,0,0,68,69,5,114,0,0,69,70,5,110,0,0,70,24,1,0,0,0,71,73,7,
  	0,0,0,72,71,1,0,0,0,73,74,1,0,0,0,74,72,1,0,0,0,74,75,1,0,0,0,75,26,1,
  	0,0,0,76,80,5,34,0,0,77,79,9,0,0,0,78,77,1,0,0,0,79,82,1,0,0,0,80,81,
  	1,0,0,0,80,78,1,0,0,0,81,83,1,0,0,0,82,80,1,0,0,0,83,84,5,34,0,0,84,28,
  	1,0,0,0,85,89,7,1,0,0,86,88,7,2,0,0,87,86,1,0,0,0,88,91,1,0,0,0,89,87,
  	1,0,0,0,89,90,1,0,0,0,90,30,1,0,0,0,91,89,1,0,0,0,92,94,7,3,0,0,93,92,
  	1,0,0,0,94,95,1,0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,97,1,0,0,0,97,98,
  	6,15,0,0,98,32,1,0,0,0,5,0,74,80,89,95,1,6,0,0
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
