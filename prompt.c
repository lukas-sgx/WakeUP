#include <stdio.h>
#include <stdlib.h>
#include "include/color.h"

void init() {
    CLEAR_SCREEN();
    Green();
    printf("        (__)\n"
           "        (oo)\\_______\n"
           "        (__)\\       )\\/\\\n"
           "            ||----w |\n"
           "            ||     ||\n"
           "      >> WakeUP - Shell <<\n\n");
}

int prompt(char **buffer){
    size_t size = 0;
    __ssize_t reader = 0;

    Purple();
    printf("$ ");
    Default();
    reader = getline(buffer, &size, stdin);

    if (reader < 1){
        return EXIT_FAILURE;
    }

    if ((*buffer)[reader - 1] == '\n') {
        (*buffer)[reader - 1] = '\0';
    }

    return EXIT_SUCCESS;
}