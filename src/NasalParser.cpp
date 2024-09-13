
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
      "program", "statement", "varDeclaration", "funcDeclaration", "ifStatement", 
      "returnStatement", "expression"
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
  	4,1,16,75,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,1,0,
  	5,0,16,8,0,10,0,12,0,19,9,0,1,0,1,0,1,1,1,1,1,1,1,1,3,1,27,8,1,1,2,1,
  	2,1,2,1,2,3,2,33,8,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,5,3,43,8,3,10,3,
  	12,3,46,9,3,3,3,48,8,3,1,3,1,3,1,3,5,3,53,8,3,10,3,12,3,56,9,3,1,3,1,
  	3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,67,8,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,
  	0,0,7,0,2,4,6,8,10,12,0,1,1,0,13,15,76,0,17,1,0,0,0,2,26,1,0,0,0,4,28,
  	1,0,0,0,6,36,1,0,0,0,8,59,1,0,0,0,10,68,1,0,0,0,12,72,1,0,0,0,14,16,3,
  	2,1,0,15,14,1,0,0,0,16,19,1,0,0,0,17,15,1,0,0,0,17,18,1,0,0,0,18,20,1,
  	0,0,0,19,17,1,0,0,0,20,21,5,0,0,1,21,1,1,0,0,0,22,27,3,4,2,0,23,27,3,
  	6,3,0,24,27,3,8,4,0,25,27,3,10,5,0,26,22,1,0,0,0,26,23,1,0,0,0,26,24,
  	1,0,0,0,26,25,1,0,0,0,27,3,1,0,0,0,28,29,5,8,0,0,29,32,5,15,0,0,30,31,
  	5,1,0,0,31,33,3,12,6,0,32,30,1,0,0,0,32,33,1,0,0,0,33,34,1,0,0,0,34,35,
  	5,2,0,0,35,5,1,0,0,0,36,37,5,9,0,0,37,38,5,15,0,0,38,47,5,3,0,0,39,44,
  	5,15,0,0,40,41,5,4,0,0,41,43,5,15,0,0,42,40,1,0,0,0,43,46,1,0,0,0,44,
  	42,1,0,0,0,44,45,1,0,0,0,45,48,1,0,0,0,46,44,1,0,0,0,47,39,1,0,0,0,47,
  	48,1,0,0,0,48,49,1,0,0,0,49,50,5,5,0,0,50,54,5,6,0,0,51,53,3,2,1,0,52,
  	51,1,0,0,0,53,56,1,0,0,0,54,52,1,0,0,0,54,55,1,0,0,0,55,57,1,0,0,0,56,
  	54,1,0,0,0,57,58,5,7,0,0,58,7,1,0,0,0,59,60,5,10,0,0,60,61,5,3,0,0,61,
  	62,3,12,6,0,62,63,5,5,0,0,63,66,3,2,1,0,64,65,5,11,0,0,65,67,3,2,1,0,
  	66,64,1,0,0,0,66,67,1,0,0,0,67,9,1,0,0,0,68,69,5,12,0,0,69,70,3,12,6,
  	0,70,71,5,2,0,0,71,11,1,0,0,0,72,73,7,0,0,0,73,13,1,0,0,0,7,17,26,32,
  	44,47,54,66
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
    setState(17);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5888) != 0)) {
      setState(14);
      statement();
      setState(19);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(20);
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

NasalParser::FuncDeclarationContext* NasalParser::StatementContext::funcDeclaration() {
  return getRuleContext<NasalParser::FuncDeclarationContext>(0);
}

NasalParser::IfStatementContext* NasalParser::StatementContext::ifStatement() {
  return getRuleContext<NasalParser::IfStatementContext>(0);
}

NasalParser::ReturnStatementContext* NasalParser::StatementContext::returnStatement() {
  return getRuleContext<NasalParser::ReturnStatementContext>(0);
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
    setState(26);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NasalParser::VAR: {
        enterOuterAlt(_localctx, 1);
        setState(22);
        varDeclaration();
        break;
      }

      case NasalParser::FUNC: {
        enterOuterAlt(_localctx, 2);
        setState(23);
        funcDeclaration();
        break;
      }

      case NasalParser::IF: {
        enterOuterAlt(_localctx, 3);
        setState(24);
        ifStatement();
        break;
      }

      case NasalParser::RETURN: {
        enterOuterAlt(_localctx, 4);
        setState(25);
        returnStatement();
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

NasalParser::ExpressionContext* NasalParser::VarDeclarationContext::expression() {
  return getRuleContext<NasalParser::ExpressionContext>(0);
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
    setState(28);
    match(NasalParser::VAR);
    setState(29);
    match(NasalParser::ID);
    setState(32);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NasalParser::T__0) {
      setState(30);
      match(NasalParser::T__0);
      setState(31);
      expression();
    }
    setState(34);
    match(NasalParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDeclarationContext ------------------------------------------------------------------

NasalParser::FuncDeclarationContext::FuncDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NasalParser::FuncDeclarationContext::FUNC() {
  return getToken(NasalParser::FUNC, 0);
}

std::vector<tree::TerminalNode *> NasalParser::FuncDeclarationContext::ID() {
  return getTokens(NasalParser::ID);
}

tree::TerminalNode* NasalParser::FuncDeclarationContext::ID(size_t i) {
  return getToken(NasalParser::ID, i);
}

std::vector<NasalParser::StatementContext *> NasalParser::FuncDeclarationContext::statement() {
  return getRuleContexts<NasalParser::StatementContext>();
}

NasalParser::StatementContext* NasalParser::FuncDeclarationContext::statement(size_t i) {
  return getRuleContext<NasalParser::StatementContext>(i);
}


size_t NasalParser::FuncDeclarationContext::getRuleIndex() const {
  return NasalParser::RuleFuncDeclaration;
}

void NasalParser::FuncDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDeclaration(this);
}

void NasalParser::FuncDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NasalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDeclaration(this);
}

NasalParser::FuncDeclarationContext* NasalParser::funcDeclaration() {
  FuncDeclarationContext *_localctx = _tracker.createInstance<FuncDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, NasalParser::RuleFuncDeclaration);
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
    setState(36);
    match(NasalParser::FUNC);
    setState(37);
    match(NasalParser::ID);
    setState(38);
    match(NasalParser::T__2);
    setState(47);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NasalParser::ID) {
      setState(39);
      match(NasalParser::ID);
      setState(44);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == NasalParser::T__3) {
        setState(40);
        match(NasalParser::T__3);
        setState(41);
        match(NasalParser::ID);
        setState(46);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(49);
    match(NasalParser::T__4);
    setState(50);
    match(NasalParser::T__5);
    setState(54);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5888) != 0)) {
      setState(51);
      statement();
      setState(56);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(57);
    match(NasalParser::T__6);
   
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

NasalParser::ExpressionContext* NasalParser::IfStatementContext::expression() {
  return getRuleContext<NasalParser::ExpressionContext>(0);
}

std::vector<NasalParser::StatementContext *> NasalParser::IfStatementContext::statement() {
  return getRuleContexts<NasalParser::StatementContext>();
}

NasalParser::StatementContext* NasalParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<NasalParser::StatementContext>(i);
}

tree::TerminalNode* NasalParser::IfStatementContext::ELSE() {
  return getToken(NasalParser::ELSE, 0);
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
  enterRule(_localctx, 8, NasalParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    match(NasalParser::IF);
    setState(60);
    match(NasalParser::T__2);
    setState(61);
    expression();
    setState(62);
    match(NasalParser::T__4);
    setState(63);
    statement();
    setState(66);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(64);
      match(NasalParser::ELSE);
      setState(65);
      statement();
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

//----------------- ReturnStatementContext ------------------------------------------------------------------

NasalParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NasalParser::ReturnStatementContext::RETURN() {
  return getToken(NasalParser::RETURN, 0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(NasalParser::RETURN);
    setState(69);
    expression();
    setState(70);
    match(NasalParser::T__1);
   
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

tree::TerminalNode* NasalParser::ExpressionContext::NUMBER() {
  return getToken(NasalParser::NUMBER, 0);
}

tree::TerminalNode* NasalParser::ExpressionContext::STRING() {
  return getToken(NasalParser::STRING, 0);
}

tree::TerminalNode* NasalParser::ExpressionContext::ID() {
  return getToken(NasalParser::ID, 0);
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
  enterRule(_localctx, 12, NasalParser::RuleExpression);
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
    setState(72);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 57344) != 0))) {
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

void NasalParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  nasalParserInitialize();
#else
  ::antlr4::internal::call_once(nasalParserOnceFlag, nasalParserInitialize);
#endif
}
