#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "include/color.h"

void show_cow_frame(int frame) {
    CLEAR_SCREEN();
    if (frame % 2 == 0) {
        Purple();
        printf("        (__)\n"
               "        (oo)\\_______\n"
               "        (__)\\       )\\/\\\n"
               "            ||----w |\n"
               "            ||     ||\n");
        Green();               
        printf("      >> WakeUP - Shell <<\n\n");
    } else {
        Purple();
        printf("        (__)\n"
               "        (");
        Red();
        printf("oo");
        Purple();
        printf(")\\_______\n"
               "        (__)\\       )\\/\\\n"
               "            ||----w |\n"
               "            ||     ||\n");
        Green();
        printf("      >> WakeUP - Shell <<\n\n");
    }
}

void init(){
    for (int i = 0; i < 6; ++i) {
        show_cow_frame(i);
        usleep(300000);
    }
}

int prompt(char **buffer){

    char cwd[128];
    char *currentDir;

    size_t size = 0;
    ssize_t reader = 0;

    Default();
    getcwd(cwd, sizeof(cwd));
    currentDir = strrchr(cwd, '/');
    currentDir++;
    printf("%s ", currentDir);
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