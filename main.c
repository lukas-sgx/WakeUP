#include <stdlib.h>
#include <stdio.h>
#include "include/prompt.h"

int main(int argc, char const *argv[])
{
    char *buffer = NULL;

    while (1)
    {
        int success = prompt(buffer);

        if(success){
            break;
        }
    }
    
    return 0;
}
