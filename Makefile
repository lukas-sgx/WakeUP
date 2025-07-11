CC=gcc
DEP = main.c prompt.c
OUTPUT = shell-emulator

build: $(DEP)
	$(CC) $(DEP) -o $(OUTPUT)