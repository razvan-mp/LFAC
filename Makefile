all:
	yacc -d semantics.y
	lex parser.l

	gcc -g lex.yy.c y.tab.c -o test

	./test input.txt
