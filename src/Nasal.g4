grammar Nasal;

// Lexer rules
VAR: 'var';
FUNC: 'func';
IF: 'if';
ELSE: 'else';
RETURN: 'return';
NUMBER: [0-9]+;
STRING: '"' .*? '"';
ID: [a-zA-Z_][a-zA-Z_0-9]*;
WS: [ \t\n\r]+ -> skip;

// Parser rules
program: statement* EOF;

statement
    : varDeclaration
    | funcDeclaration
    | ifStatement
    | returnStatement
    ;

varDeclaration: VAR ID ('=' expression)? ';';
funcDeclaration: FUNC ID '(' (ID (',' ID)*)? ')' '{' statement* '}';
ifStatement: IF '(' expression ')' statement (ELSE statement)?;
returnStatement: RETURN expression ';';

expression
    : NUMBER
    | STRING
    | ID
    ;