#include <stdio.h>
#include "include/color.h"

void prompt(char *buffer){
    size_t size = 0;
    __ssize_t reader = 0;

    Purple();
    printf("$ ");
    Default();
    reader = getline(&buffer, &size, stdin);
}