#include <stdlib.h>
#include <stdio.h>
#include "include/prompt.h"

int main(int argc, char const *argv[])
{
    char *buffer = NULL;

    while (1)
    {
        prompt(buffer);
    }
    
    return 0;
}
