#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "include/color.h"

int execCLI(char *buffer){
    char *arg;
    arg = strtok(buffer, " ");

    while (arg != NULL) {
        if(strcmp(arg, "exit") == 0){
            return EXIT_FAILURE;
        }
        arg = strtok(NULL, " ");
    }

    return EXIT_SUCCESS;
}