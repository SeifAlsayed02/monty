build:
	gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty

all: build

memory:
	valgrind ./monty bytecodes/000.m

run:
	./monty bytecodes/000.m