CC = @echo "🐮 Compiling WakeUP" && gcc
DEP = main.c prompt.c task.c
OUTPUT = WakeUP
LAUNCH = @echo "Lauch WakeUP - Shell" && ./WakeUP

build: $(DEP)
	$(CC) $(DEP) -o $(OUTPUT)
	$(LAUNCH)