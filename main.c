#include <stdlib.h>
#include <stdio.h>
#include "include/color.h"
#include "include/prompt.h"
#include "include/task.h"

#define MAX_SIZE 1024
#define CHECK() if(success){CLEAR_SCREEN();break;}

int main(int argc, char const *argv[])
{
    char *buffer = malloc(MAX_SIZE);
    int success;

    init();

    while (1)
    {
        success = prompt(&buffer);
        CHECK();

        success = execCLI(buffer);
        CHECK();
    }
    
    free(buffer);
    
    return 0;
}
