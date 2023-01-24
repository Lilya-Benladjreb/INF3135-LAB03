build:
	gcc -o words words.c

test: build
	bats tests.bats --tap

