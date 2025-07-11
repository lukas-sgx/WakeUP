#include <stdlib.h>
#include <stdio.h>
#include "include/color.h"
#include "include/prompt.h"

int main(int argc, char const *argv[])
{
    char *buffer = NULL;

    init();

    while (1)
    {
        int success = prompt(buffer);

        if(success){
            CLEAR_SCREEN();
            break;
        }
    }
    
    return 0;
}
