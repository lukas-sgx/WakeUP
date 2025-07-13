#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include "include/color.h"

int exist(const char *path){
    struct stat st;
    if (stat(path, &st) == -1)
        return EXIT_FAILURE;

    if (S_ISREG(st.st_mode))
        return 2;
    else if (S_ISDIR(st.st_mode))
        return EXIT_SUCCESS;
    else
        return 3;
}

int execCLI(char *buffer){
    char *args[64];
    int i = 0;

    char *token = strtok(buffer, " \n");

    if (token == NULL) {
        return EXIT_SUCCESS;
    }

    while (token != NULL && i < 63) {
        if(strcmp(token, "exit") == 0){
            return EXIT_FAILURE;
        }

        args[i++] = token;
        token = strtok(NULL, " \n");
    }

    args[i] = NULL;

    if(strcmp(args[0], "cd") == 0){
        int success = exist(args[1]);
        
        if(success == 0){
            chdir(args[1]);
        }else if(success == 1){
            Red();
            printf("Le dossier n'existe pas\n");
        }else if(success == 2){
            Red();
            printf("%s est un fichier\n", args[1]);
        }else if(success == 3){
            Red();
            printf("%s est un fichier\n", args[1]);
        }
    }else{
        __pid_t pid = fork();

        if(pid == 0){
            if(strcmp(args[0], "ls") == 0){
                args[i] = "--color=auto";
                args[i+1] = NULL;
            }
            
            execvp(args[0], args);
        }else if(pid > 0){
            int status;
            waitpid(pid, &status, 0);
        }
    }

    return EXIT_SUCCESS;
}