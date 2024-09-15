
// Generated from src/Nasal.g4 by ANTLR 4.13.2


#include "NasalListener.h"

#include "NasalParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct NasalParserStaticData final {
  NasalParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NasalParserStaticData(const NasalParserStaticData&) = delete;
  NasalParserStaticData(NasalParserStaticData&&) = delete;
  NasalParserStaticData& operator=(const NasalParserStaticData&) = delete;
  NasalParserStaticData& operator=(NasalParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag nasalParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<NasalParserStaticData> nasalParserStaticData = nullptr;

void nasalParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (nasalParserStaticData != nullptr) {
    return;
  }
#else
  assert(nasalParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<NasalParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "varDeclaration", "assignment", "expressionStatement", 
      "returnStatement", "ifStatement", "elsifStatement", "elseStatement", 
      "expression", "functionExpression", "parameterList", "block", "simpleExpression", 
      "assignmentExpression", "literal", "booleanLiteral", "binaryOperator"
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
  	4,1,32,159,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,5,0,38,8,0,10,0,12,0,41,9,0,1,0,
  	1,0,1,1,1,1,1,1,1,1,1,1,3,1,50,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,
  	3,1,3,1,3,1,4,1,4,1,4,1,5,1,5,3,5,68,8,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,
  	1,6,5,6,78,8,6,10,6,12,6,81,9,6,1,6,3,6,84,8,6,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,8,1,8,1,8,1,9,1,9,1,9,3,9,98,8,9,1,10,1,10,1,10,3,10,103,8,10,1,10,
  	1,10,1,10,1,11,1,11,1,11,5,11,111,8,11,10,11,12,11,114,9,11,1,12,1,12,
  	5,12,118,8,12,10,12,12,12,121,9,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,3,13,134,8,13,1,13,1,13,1,13,1,13,5,13,140,8,13,10,
  	13,12,13,143,9,13,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,3,15,153,8,
  	15,1,16,1,16,1,17,1,17,1,17,0,1,26,18,0,2,4,6,8,10,12,14,16,18,20,22,
  	24,26,28,30,32,34,0,2,1,0,7,8,1,0,15,24,160,0,39,1,0,0,0,2,49,1,0,0,0,
  	4,51,1,0,0,0,6,57,1,0,0,0,8,62,1,0,0,0,10,65,1,0,0,0,12,71,1,0,0,0,14,
  	85,1,0,0,0,16,91,1,0,0,0,18,97,1,0,0,0,20,99,1,0,0,0,22,107,1,0,0,0,24,
  	115,1,0,0,0,26,133,1,0,0,0,28,144,1,0,0,0,30,152,1,0,0,0,32,154,1,0,0,
  	0,34,156,1,0,0,0,36,38,3,2,1,0,37,36,1,0,0,0,38,41,1,0,0,0,39,37,1,0,
  	0,0,39,40,1,0,0,0,40,42,1,0,0,0,41,39,1,0,0,0,42,43,5,0,0,1,43,1,1,0,
  	0,0,44,50,3,4,2,0,45,50,3,6,3,0,46,50,3,8,4,0,47,50,3,10,5,0,48,50,3,
  	12,6,0,49,44,1,0,0,0,49,45,1,0,0,0,49,46,1,0,0,0,49,47,1,0,0,0,49,48,
  	1,0,0,0,50,3,1,0,0,0,51,52,5,1,0,0,52,53,5,10,0,0,53,54,5,14,0,0,54,55,
  	3,18,9,0,55,56,5,30,0,0,56,5,1,0,0,0,57,58,5,10,0,0,58,59,5,14,0,0,59,
  	60,3,18,9,0,60,61,5,30,0,0,61,7,1,0,0,0,62,63,3,18,9,0,63,64,5,30,0,0,
  	64,9,1,0,0,0,65,67,5,6,0,0,66,68,3,18,9,0,67,66,1,0,0,0,67,68,1,0,0,0,
  	68,69,1,0,0,0,69,70,5,30,0,0,70,11,1,0,0,0,71,72,5,3,0,0,72,73,5,26,0,
  	0,73,74,3,18,9,0,74,75,5,27,0,0,75,79,3,24,12,0,76,78,3,14,7,0,77,76,
  	1,0,0,0,78,81,1,0,0,0,79,77,1,0,0,0,79,80,1,0,0,0,80,83,1,0,0,0,81,79,
  	1,0,0,0,82,84,3,16,8,0,83,82,1,0,0,0,83,84,1,0,0,0,84,13,1,0,0,0,85,86,
  	5,4,0,0,86,87,5,26,0,0,87,88,3,18,9,0,88,89,5,27,0,0,89,90,3,24,12,0,
  	90,15,1,0,0,0,91,92,5,5,0,0,92,93,3,24,12,0,93,17,1,0,0,0,94,98,3,20,
  	10,0,95,98,3,26,13,0,96,98,3,28,14,0,97,94,1,0,0,0,97,95,1,0,0,0,97,96,
  	1,0,0,0,98,19,1,0,0,0,99,100,5,2,0,0,100,102,5,26,0,0,101,103,3,22,11,
  	0,102,101,1,0,0,0,102,103,1,0,0,0,103,104,1,0,0,0,104,105,5,27,0,0,105,
  	106,3,24,12,0,106,21,1,0,0,0,107,112,5,10,0,0,108,109,5,31,0,0,109,111,
  	5,10,0,0,110,108,1,0,0,0,111,114,1,0,0,0,112,110,1,0,0,0,112,113,1,0,
  	0,0,113,23,1,0,0,0,114,112,1,0,0,0,115,119,5,28,0,0,116,118,3,2,1,0,117,
  	116,1,0,0,0,118,121,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,122,1,
  	0,0,0,121,119,1,0,0,0,122,123,5,29,0,0,123,25,1,0,0,0,124,125,6,13,-1,
  	0,125,134,3,30,15,0,126,134,5,10,0,0,127,128,5,26,0,0,128,129,3,18,9,
  	0,129,130,5,27,0,0,130,134,1,0,0,0,131,132,5,25,0,0,132,134,3,26,13,1,
  	133,124,1,0,0,0,133,126,1,0,0,0,133,127,1,0,0,0,133,131,1,0,0,0,134,141,
  	1,0,0,0,135,136,10,2,0,0,136,137,3,34,17,0,137,138,3,26,13,3,138,140,
  	1,0,0,0,139,135,1,0,0,0,140,143,1,0,0,0,141,139,1,0,0,0,141,142,1,0,0,
  	0,142,27,1,0,0,0,143,141,1,0,0,0,144,145,5,10,0,0,145,146,5,14,0,0,146,
  	147,3,26,13,0,147,29,1,0,0,0,148,153,3,32,16,0,149,153,5,11,0,0,150,153,
  	5,12,0,0,151,153,5,9,0,0,152,148,1,0,0,0,152,149,1,0,0,0,152,150,1,0,
  	0,0,152,151,1,0,0,0,153,31,1,0,0,0,154,155,7,0,0,0,155,33,1,0,0,0,156,
  	157,7,1,0,0,157,35,1,0,0,0,12,39,49,67,79,83,97,102,112,119,133,141,152
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  nasalParserStaticData = std::move(staticData);
}

}

NasalParser::NasalParser(TokenStream *input) : NasalParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

NasalParser::NasalParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  NasalParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *nasalParserStaticData->atn, nasalParserStaticData->decisionToDFA, nasalParserStaticData->sharedContextCache, options);
}

NasalParser::~NasalParser() {
  delete _interpreter;
}

const atn::ATN& NasalParser::getATN() const {
  return *nasalParserStaticData->atn;
}

std::string NasalParser::getGrammarFileName() const {
  return "Nasal.g4";
}

const std::vector<std::string>& NasalParser::getRuleNames() const {
  return nasalParserStaticData->ruleNames;
}

const dfa::Vocabulary& NasalParser::getVocabulary() const {
  return nasalParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NasalParser::getSerializedATN() const {
  return nasalParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

NasalParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NasalParser::ProgramContext::EOF() {
  return getToken(NasalParser::EOF, 0);
}

std::vector<NasalParser::StatementContext *> NasalParser::ProgramContext::statement() {
  return getRuleContexts<NasalParser::StatementContext>();
}

NasalParser::StatementContext* NasalParser::ProgramContext::statement(size_t i) {
  return getRuleContext<NasalParser::StatementContext>(i);
}


size_t NasalParser::ProgramContext::getRuleIndex() const {
  return NasalParser::RuleProgram;
}

void NasalParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void NasalParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

NasalParser::ProgramContext* NasalParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, NasalParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 100671438) != 0)) {
      setState(36);
      statement();
      setState(41);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(42);
    match(NasalParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

NasalParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NasalParser::VarDeclarationContext* NasalParser::StatementContext::varDeclaration() {
  return getRuleContext<NasalParser::VarDeclarationContext>(0);
}

NasalParser::AssignmentContext* NasalParser::StatementContext::assignment() {
  return getRuleContext<NasalParser::AssignmentContext>(0);
}

NasalParser::ExpressionStatementContext* NasalParser::StatementContext::expressionStatement() {
  return getRuleContext<NasalParser::ExpressionStatementContext>(0);
}

NasalParser::ReturnStatementContext* NasalParser::StatementContext::returnStatement() {
  return getRuleContext<NasalParser::ReturnStatementContext>(0);
}

NasalParser::IfStatementContext* NasalParser::StatementContext::ifStatement() {
  return getRuleContext<NasalParser::IfStatementContext>(0);
}


size_t NasalParser::StatementContext::getRuleIndex() const {
  return NasalParser::RuleStatement;
}

void NasalParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void NasalParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

NasalParser::StatementContext* NasalParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, NasalParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(44);
      varDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(45);
      assignment();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(46);
      expressionStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(47);
      returnStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(48);
      ifStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationContext ------------------------------------------------------------------

NasalParser::VarDeclarationContext::VarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NasalParser::VarDeclarationContext::VAR() {
  return getToken(NasalParser::VAR, 0);
}

tree::TerminalNode* NasalParser::VarDeclarationContext::ID() {
  return getToken(NasalParser::ID, 0);
}

tree::TerminalNode* NasalParser::VarDeclarationContext::ASSIGN() {
  return getToken(NasalParser::ASSIGN, 0);
}

NasalParser::ExpressionContext* NasalParser::VarDeclarationContext::expression() {
  return getRuleContext<NasalParser::ExpressionContext>(0);
}

tree::TerminalNode* NasalParser::VarDeclarationContext::SEMICOLON() {
  return getToken(NasalParser::SEMICOLON, 0);
}


size_t NasalParser::VarDeclarationContext::getRuleIndex() const {
  return NasalParser::RuleVarDeclaration;
}

void NasalParser::VarDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDeclaration(this);
}

void NasalParser::VarDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDeclaration(this);
}

NasalParser::VarDeclarationContext* NasalParser::varDeclaration() {
  VarDeclarationContext *_localctx = _tracker.createInstance<VarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, NasalParser::RuleVarDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(NasalParser::VAR);
    setState(52);
    match(NasalParser::ID);
    setState(53);
    match(NasalParser::ASSIGN);
    setState(54);
    expression();
    setState(55);
    match(NasalParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

NasalParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NasalParser::AssignmentContext::ID() {
  return getToken(NasalParser::ID, 0);
}

tree::TerminalNode* NasalParser::AssignmentContext::ASSIGN() {
  return getToken(NasalParser::ASSIGN, 0);
}

NasalParser::ExpressionContext* NasalParser::AssignmentContext::expression() {
  return getRuleContext<NasalParser::ExpressionContext>(0);
}

tree::TerminalNode* NasalParser::AssignmentContext::SEMICOLON() {
  return getToken(NasalParser::SEMICOLON, 0);
}


size_t NasalParser::AssignmentContext::getRuleIndex() const {
  return NasalParser::RuleAssignment;
}

void NasalParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void NasalParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

NasalParser::AssignmentContext* NasalParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 6, NasalParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    match(NasalParser::ID);
    setState(58);
    match(NasalParser::ASSIGN);
    setState(59);
    expression();
    setState(60);
    match(NasalParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

NasalParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NasalParser::ExpressionContext* NasalParser::ExpressionStatementContext::expression() {
  return getRuleContext<NasalParser::ExpressionContext>(0);
}

tree::TerminalNode* NasalParser::ExpressionStatementContext::SEMICOLON() {
  return getToken(NasalParser::SEMICOLON, 0);
}


size_t NasalParser::ExpressionStatementContext::getRuleIndex() const {
  return NasalParser::RuleExpressionStatement;
}

void NasalParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void NasalParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}

NasalParser::ExpressionStatementContext* NasalParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, NasalParser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    expression();
    setState(63);
    match(NasalParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

NasalParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NasalParser::ReturnStatementContext::RETURN() {
  return getToken(NasalParser::RETURN, 0);
}

tree::TerminalNode* NasalParser::ReturnStatementContext::SEMICOLON() {
  return getToken(NasalParser::SEMICOLON, 0);
}

NasalParser::ExpressionContext* NasalParser::ReturnStatementContext::expression() {
  return getRuleContext<NasalParser::ExpressionContext>(0);
}


size_t NasalParser::ReturnStatementContext::getRuleIndex() const {
  return NasalParser::RuleReturnStatement;
}

void NasalParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void NasalParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}

NasalParser::ReturnStatementContext* NasalParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, NasalParser::RuleReturnStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    match(NasalParser::RETURN);
    setState(67);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 100671364) != 0)) {
      setState(66);
      expression();
    }
    setState(69);
    match(NasalParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

NasalParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NasalParser::IfStatementContext::IF() {
  return getToken(NasalParser::IF, 0);
}

tree::TerminalNode* NasalParser::IfStatementContext::LPAREN() {
  return getToken(NasalParser::LPAREN, 0);
}

NasalParser::ExpressionContext* NasalParser::IfStatementContext::expression() {
  return getRuleContext<NasalParser::ExpressionContext>(0);
}

tree::TerminalNode* NasalParser::IfStatementContext::RPAREN() {
  return getToken(NasalParser::RPAREN, 0);
}

NasalParser::BlockContext* NasalParser::IfStatementContext::block() {
  return getRuleContext<NasalParser::BlockContext>(0);
}

std::vector<NasalParser::ElsifStatementContext *> NasalParser::IfStatementContext::elsifStatement() {
  return getRuleContexts<NasalParser::ElsifStatementContext>();
}

NasalParser::ElsifStatementContext* NasalParser::IfStatementContext::elsifStatement(size_t i) {
  return getRuleContext<NasalParser::ElsifStatementContext>(i);
}

NasalParser::ElseStatementContext* NasalParser::IfStatementContext::elseStatement() {
  return getRuleContext<NasalParser::ElseStatementContext>(0);
}


size_t NasalParser::IfStatementContext::getRuleIndex() const {
  return NasalParser::RuleIfStatement;
}

void NasalParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void NasalParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

NasalParser::IfStatementContext* NasalParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, NasalParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(NasalParser::IF);
    setState(72);
    match(NasalParser::LPAREN);
    setState(73);
    expression();
    setState(74);
    match(NasalParser::RPAREN);
    setState(75);
    block();
    setState(79);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NasalParser::ELSIF) {
      setState(76);
      elsifStatement();
      setState(81);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(83);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NasalParser::ELSE) {
      setState(82);
      elseStatement();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElsifStatementContext ------------------------------------------------------------------

NasalParser::ElsifStatementContext::ElsifStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NasalParser::ElsifStatementContext::ELSIF() {
  return getToken(NasalParser::ELSIF, 0);
}

tree::TerminalNode* NasalParser::ElsifStatementContext::LPAREN() {
  return getToken(NasalParser::LPAREN, 0);
}

NasalParser::ExpressionContext* NasalParser::ElsifStatementContext::expression() {
  return getRuleContext<NasalParser::ExpressionContext>(0);
}

tree::TerminalNode* NasalParser::ElsifStatementContext::RPAREN() {
  return getToken(NasalParser::RPAREN, 0);
}

NasalParser::BlockContext* NasalParser::ElsifStatementContext::block() {
  return getRuleContext<NasalParser::BlockContext>(0);
}


size_t NasalParser::ElsifStatementContext::getRuleIndex() const {
  return NasalParser::RuleElsifStatement;
}

void NasalParser::ElsifStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElsifStatement(this);
}

void NasalParser::ElsifStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElsifStatement(this);
}

NasalParser::ElsifStatementContext* NasalParser::elsifStatement() {
  ElsifStatementContext *_localctx = _tracker.createInstance<ElsifStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, NasalParser::RuleElsifStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(NasalParser::ELSIF);
    setState(86);
    match(NasalParser::LPAREN);
    setState(87);
    expression();
    setState(88);
    match(NasalParser::RPAREN);
    setState(89);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatementContext ------------------------------------------------------------------

NasalParser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NasalParser::ElseStatementContext::ELSE() {
  return getToken(NasalParser::ELSE, 0);
}

NasalParser::BlockContext* NasalParser::ElseStatementContext::block() {
  return getRuleContext<NasalParser::BlockContext>(0);
}


size_t NasalParser::ElseStatementContext::getRuleIndex() const {
  return NasalParser::RuleElseStatement;
}

void NasalParser::ElseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseStatement(this);
}

void NasalParser::ElseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseStatement(this);
}

NasalParser::ElseStatementContext* NasalParser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, NasalParser::RuleElseStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(NasalParser::ELSE);
    setState(92);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

NasalParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NasalParser::FunctionExpressionContext* NasalParser::ExpressionContext::functionExpression() {
  return getRuleContext<NasalParser::FunctionExpressionContext>(0);
}

NasalParser::SimpleExpressionContext* NasalParser::ExpressionContext::simpleExpression() {
  return getRuleContext<NasalParser::SimpleExpressionContext>(0);
}

NasalParser::AssignmentExpressionContext* NasalParser::ExpressionContext::assignmentExpression() {
  return getRuleContext<NasalParser::AssignmentExpressionContext>(0);
}


size_t NasalParser::ExpressionContext::getRuleIndex() const {
  return NasalParser::RuleExpression;
}

void NasalParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void NasalParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

NasalParser::ExpressionContext* NasalParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 18, NasalParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(97);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(94);
      functionExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(95);
      simpleExpression(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(96);
      assignmentExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionExpressionContext ------------------------------------------------------------------

NasalParser::FunctionExpressionContext::FunctionExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NasalParser::FunctionExpressionContext::FUNC() {
  return getToken(NasalParser::FUNC, 0);
}

tree::TerminalNode* NasalParser::FunctionExpressionContext::LPAREN() {
  return getToken(NasalParser::LPAREN, 0);
}

tree::TerminalNode* NasalParser::FunctionExpressionContext::RPAREN() {
  return getToken(NasalParser::RPAREN, 0);
}

NasalParser::BlockContext* NasalParser::FunctionExpressionContext::block() {
  return getRuleContext<NasalParser::BlockContext>(0);
}

NasalParser::ParameterListContext* NasalParser::FunctionExpressionContext::parameterList() {
  return getRuleContext<NasalParser::ParameterListContext>(0);
}


size_t NasalParser::FunctionExpressionContext::getRuleIndex() const {
  return NasalParser::RuleFunctionExpression;
}

void NasalParser::FunctionExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionExpression(this);
}

void NasalParser::FunctionExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionExpression(this);
}

NasalParser::FunctionExpressionContext* NasalParser::functionExpression() {
  FunctionExpressionContext *_localctx = _tracker.createInstance<FunctionExpressionContext>(_ctx, getState());
  enterRule(_localctx, 20, NasalParser::RuleFunctionExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(NasalParser::FUNC);
    setState(100);
    match(NasalParser::LPAREN);
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NasalParser::ID) {
      setState(101);
      parameterList();
    }
    setState(104);
    match(NasalParser::RPAREN);
    setState(105);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

NasalParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> NasalParser::ParameterListContext::ID() {
  return getTokens(NasalParser::ID);
}

tree::TerminalNode* NasalParser::ParameterListContext::ID(size_t i) {
  return getToken(NasalParser::ID, i);
}

std::vector<tree::TerminalNode *> NasalParser::ParameterListContext::COMMA() {
  return getTokens(NasalParser::COMMA);
}

tree::TerminalNode* NasalParser::ParameterListContext::COMMA(size_t i) {
  return getToken(NasalParser::COMMA, i);
}


size_t NasalParser::ParameterListContext::getRuleIndex() const {
  return NasalParser::RuleParameterList;
}

void NasalParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void NasalParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}

NasalParser::ParameterListContext* NasalParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 22, NasalParser::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(NasalParser::ID);
    setState(112);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NasalParser::COMMA) {
      setState(108);
      match(NasalParser::COMMA);
      setState(109);
      match(NasalParser::ID);
      setState(114);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

NasalParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NasalParser::BlockContext::LBRACE() {
  return getToken(NasalParser::LBRACE, 0);
}

tree::TerminalNode* NasalParser::BlockContext::RBRACE() {
  return getToken(NasalParser::RBRACE, 0);
}

std::vector<NasalParser::StatementContext *> NasalParser::BlockContext::statement() {
  return getRuleContexts<NasalParser::StatementContext>();
}

NasalParser::StatementContext* NasalParser::BlockContext::statement(size_t i) {
  return getRuleContext<NasalParser::StatementContext>(i);
}


size_t NasalParser::BlockContext::getRuleIndex() const {
  return NasalParser::RuleBlock;
}

void NasalParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void NasalParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

NasalParser::BlockContext* NasalParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 24, NasalParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(NasalParser::LBRACE);
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 100671438) != 0)) {
      setState(116);
      statement();
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(122);
    match(NasalParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleExpressionContext ------------------------------------------------------------------

NasalParser::SimpleExpressionContext::SimpleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NasalParser::LiteralContext* NasalParser::SimpleExpressionContext::literal() {
  return getRuleContext<NasalParser::LiteralContext>(0);
}

tree::TerminalNode* NasalParser::SimpleExpressionContext::ID() {
  return getToken(NasalParser::ID, 0);
}

tree::TerminalNode* NasalParser::SimpleExpressionContext::LPAREN() {
  return getToken(NasalParser::LPAREN, 0);
}

NasalParser::ExpressionContext* NasalParser::SimpleExpressionContext::expression() {
  return getRuleContext<NasalParser::ExpressionContext>(0);
}

tree::TerminalNode* NasalParser::SimpleExpressionContext::RPAREN() {
  return getToken(NasalParser::RPAREN, 0);
}

tree::TerminalNode* NasalParser::SimpleExpressionContext::NOT() {
  return getToken(NasalParser::NOT, 0);
}

std::vector<NasalParser::SimpleExpressionContext *> NasalParser::SimpleExpressionContext::simpleExpression() {
  return getRuleContexts<NasalParser::SimpleExpressionContext>();
}

NasalParser::SimpleExpressionContext* NasalParser::SimpleExpressionContext::simpleExpression(size_t i) {
  return getRuleContext<NasalParser::SimpleExpressionContext>(i);
}

NasalParser::BinaryOperatorContext* NasalParser::SimpleExpressionContext::binaryOperator() {
  return getRuleContext<NasalParser::BinaryOperatorContext>(0);
}


size_t NasalParser::SimpleExpressionContext::getRuleIndex() const {
  return NasalParser::RuleSimpleExpression;
}

void NasalParser::SimpleExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleExpression(this);
}

void NasalParser::SimpleExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleExpression(this);
}


NasalParser::SimpleExpressionContext* NasalParser::simpleExpression() {
   return simpleExpression(0);
}

NasalParser::SimpleExpressionContext* NasalParser::simpleExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NasalParser::SimpleExpressionContext *_localctx = _tracker.createInstance<SimpleExpressionContext>(_ctx, parentState);
  NasalParser::SimpleExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, NasalParser::RuleSimpleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(133);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NasalParser::TRUE:
      case NasalParser::FALSE:
      case NasalParser::NIL:
      case NasalParser::NUMBER:
      case NasalParser::STRING: {
        setState(125);
        literal();
        break;
      }

      case NasalParser::ID: {
        setState(126);
        match(NasalParser::ID);
        break;
      }

      case NasalParser::LPAREN: {
        setState(127);
        match(NasalParser::LPAREN);
        setState(128);
        expression();
        setState(129);
        match(NasalParser::RPAREN);
        break;
      }

      case NasalParser::NOT: {
        setState(131);
        match(NasalParser::NOT);
        setState(132);
        simpleExpression(1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(141);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<SimpleExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleSimpleExpression);
        setState(135);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(136);
        binaryOperator();
        setState(137);
        simpleExpression(3); 
      }
      setState(143);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

NasalParser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NasalParser::AssignmentExpressionContext::ID() {
  return getToken(NasalParser::ID, 0);
}

tree::TerminalNode* NasalParser::AssignmentExpressionContext::ASSIGN() {
  return getToken(NasalParser::ASSIGN, 0);
}

NasalParser::SimpleExpressionContext* NasalParser::AssignmentExpressionContext::simpleExpression() {
  return getRuleContext<NasalParser::SimpleExpressionContext>(0);
}


size_t NasalParser::AssignmentExpressionContext::getRuleIndex() const {
  return NasalParser::RuleAssignmentExpression;
}

void NasalParser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}

void NasalParser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}

NasalParser::AssignmentExpressionContext* NasalParser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, NasalParser::RuleAssignmentExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(NasalParser::ID);
    setState(145);
    match(NasalParser::ASSIGN);
    setState(146);
    simpleExpression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

NasalParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NasalParser::BooleanLiteralContext* NasalParser::LiteralContext::booleanLiteral() {
  return getRuleContext<NasalParser::BooleanLiteralContext>(0);
}

tree::TerminalNode* NasalParser::LiteralContext::NUMBER() {
  return getToken(NasalParser::NUMBER, 0);
}

tree::TerminalNode* NasalParser::LiteralContext::STRING() {
  return getToken(NasalParser::STRING, 0);
}

tree::TerminalNode* NasalParser::LiteralContext::NIL() {
  return getToken(NasalParser::NIL, 0);
}


size_t NasalParser::LiteralContext::getRuleIndex() const {
  return NasalParser::RuleLiteral;
}

void NasalParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void NasalParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

NasalParser::LiteralContext* NasalParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 30, NasalParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(152);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NasalParser::TRUE:
      case NasalParser::FALSE: {
        enterOuterAlt(_localctx, 1);
        setState(148);
        booleanLiteral();
        break;
      }

      case NasalParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(149);
        match(NasalParser::NUMBER);
        break;
      }

      case NasalParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(150);
        match(NasalParser::STRING);
        break;
      }

      case NasalParser::NIL: {
        enterOuterAlt(_localctx, 4);
        setState(151);
        match(NasalParser::NIL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanLiteralContext ------------------------------------------------------------------

NasalParser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NasalParser::BooleanLiteralContext::TRUE() {
  return getToken(NasalParser::TRUE, 0);
}

tree::TerminalNode* NasalParser::BooleanLiteralContext::FALSE() {
  return getToken(NasalParser::FALSE, 0);
}


size_t NasalParser::BooleanLiteralContext::getRuleIndex() const {
  return NasalParser::RuleBooleanLiteral;
}

void NasalParser::BooleanLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanLiteral(this);
}

void NasalParser::BooleanLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanLiteral(this);
}

NasalParser::BooleanLiteralContext* NasalParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 32, NasalParser::RuleBooleanLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    _la = _input->LA(1);
    if (!(_la == NasalParser::TRUE

    || _la == NasalParser::FALSE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryOperatorContext ------------------------------------------------------------------

NasalParser::BinaryOperatorContext::BinaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NasalParser::BinaryOperatorContext::PLUS() {
  return getToken(NasalParser::PLUS, 0);
}

tree::TerminalNode* NasalParser::BinaryOperatorContext::MINUS() {
  return getToken(NasalParser::MINUS, 0);
}

tree::TerminalNode* NasalParser::BinaryOperatorContext::MULT() {
  return getToken(NasalParser::MULT, 0);
}

tree::TerminalNode* NasalParser::BinaryOperatorContext::DIV() {
  return getToken(NasalParser::DIV, 0);
}

tree::TerminalNode* NasalParser::BinaryOperatorContext::EQ() {
  return getToken(NasalParser::EQ, 0);
}

tree::TerminalNode* NasalParser::BinaryOperatorContext::NEQ() {
  return getToken(NasalParser::NEQ, 0);
}

tree::TerminalNode* NasalParser::BinaryOperatorContext::GT() {
  return getToken(NasalParser::GT, 0);
}

tree::TerminalNode* NasalParser::BinaryOperatorContext::LT() {
  return getToken(NasalParser::LT, 0);
}

tree::TerminalNode* NasalParser::BinaryOperatorContext::GTE() {
  return getToken(NasalParser::GTE, 0);
}

tree::TerminalNode* NasalParser::BinaryOperatorContext::LTE() {
  return getToken(NasalParser::LTE, 0);
}


size_t NasalParser::BinaryOperatorContext::getRuleIndex() const {
  return NasalParser::RuleBinaryOperator;
}

void NasalParser::BinaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryOperator(this);
}

void NasalParser::BinaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryOperator(this);
}

NasalParser::BinaryOperatorContext* NasalParser::binaryOperator() {
  BinaryOperatorContext *_localctx = _tracker.createInstance<BinaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 34, NasalParser::RuleBinaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33521664) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool NasalParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 13: return simpleExpressionSempred(antlrcpp::downCast<SimpleExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool NasalParser::simpleExpressionSempred(SimpleExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void NasalParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  nasalParserInitialize();
#else
  ::antlr4::internal::call_once(nasalParserOnceFlag, nasalParserInitialize);
#endif
}
