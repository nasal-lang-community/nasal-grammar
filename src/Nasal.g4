grammar Nasal;

// Parser Rules

program
    : statement* EOF
    ;

statement
    : varDeclaration
    | assignment
    | expressionStatement
    | returnStatement
    | ifStatement
    ;

varDeclaration
    : VAR ID ASSIGN expression SEMICOLON
    ;

assignment
    : ID ASSIGN expression SEMICOLON
    ;

expressionStatement
    : expression SEMICOLON
    ;

returnStatement
    : RETURN expression? SEMICOLON
    ;

ifStatement
    : IF LPAREN expression RPAREN block (elsifStatement)* (elseStatement)?
    ;

elsifStatement
    : ELSIF LPAREN expression RPAREN block
    ;

elseStatement
    : ELSE block
    ;

expression
    : functionExpression
    | simpleExpression
    | assignmentExpression
    ;

functionExpression
    : FUNC LPAREN parameterList? RPAREN block
    ;

parameterList
    : ID (COMMA ID)*
    ;

block
    : LBRACE statement* RBRACE
    ;

simpleExpression
    : literal
    | ID
    | LPAREN expression RPAREN
    | simpleExpression binaryOperator simpleExpression
    | NOT simpleExpression
    ;

assignmentExpression
    : ID ASSIGN simpleExpression
    ;

literal
    : booleanLiteral
    | NUMBER
    | STRING
    | NIL
    ;

booleanLiteral
    : TRUE
    | FALSE
    ;

binaryOperator
    : PLUS
    | MINUS
    | MULT
    | DIV
    | EQ
    | NEQ
    | GT
    | LT
    | GTE
    | LTE
    ;

// Lexer Rules

VAR: 'var';
FUNC: 'func';
IF: 'if';
ELSIF: 'elsif';
ELSE: 'else';
RETURN: 'return';
TRUE: 'true';
FALSE: 'false';
NIL: 'nil';

ID: [a-zA-Z_][a-zA-Z_0-9]*;

NUMBER: [0-9]+;
STRING: '"' .*? '"';
WS: [ \t\n\r]+ -> skip;

ASSIGN: '=';
PLUS: '+';
MINUS: '-';
MULT: '*';
DIV: '/';
EQ: '==';
NEQ: '!=';
GT: '>';
LT: '<';
GTE: '>=';
LTE: '<=';
NOT: '!';

LPAREN: '(';
RPAREN: ')';
LBRACE: '{';
RBRACE: '}';
SEMICOLON: ';';
COMMA: ',';

COMMENT: '#' ~[\r\n]* -> skip;
