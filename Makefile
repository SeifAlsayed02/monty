build:
	gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty

all: build

run:
	./monty bytecodes/000.m