#include <stdio.h>
#include <stdlib.h>
#include "include/color.h"

int prompt(char *buffer){
    size_t size = 0;
    __ssize_t reader = 0;

    Purple();
    printf("$ ");
    Default();
    reader = getline(&buffer, &size, stdin);

    if (reader < 1){
        return EXIT_FAILURE;
    }else{
        return EXIT_SUCCESS;
    }
}