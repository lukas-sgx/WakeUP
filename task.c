#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <dirent.h>
#include "include/color.h"

int exist(const char *name){
    DIR *directory;
    
    directory = opendir(name);
    
    if(directory == NULL){
        closedir(directory);
        return EXIT_FAILURE;
    }else{
        closedir(directory);
        return EXIT_SUCCESS;
    }
}

int execCLI(char *buffer){
    char *args[64];
    int i = 0;

    char *token = strtok(buffer, " \n");
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
        
        if(success == EXIT_SUCCESS){
            chdir(args[1]);
        }else{
            Red();
            printf("Le dossier n'existe pas\n");
        }
    }else{
        __pid_t pid = fork();

        if(pid == 0){
            execvp(args[0], args);
        }else if(pid > 0){
            int status;
            waitpid(pid, &status, 0);
        }
    }

    return EXIT_SUCCESS;
}