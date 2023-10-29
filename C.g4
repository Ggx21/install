grammar C;

program: statement+;

statement: declaration | expression;

declaration: 'int' ID ';';

assignment: ID '=' expression ';';

expression:
	ID
	| INT
	| expression '+' expression
	| expression '-' expression;

ID: [a-zA-Z_]+;
INT: [0-9]+;
WS: [ \t\r\n]+ -> skip;