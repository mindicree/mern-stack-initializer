#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValidDirectory(char dir[]);

int main() {
    int install;
    char dir_project[50];
    char cmd[20];

    printf("************************************************\n");
    printf("***** MERN Stack Easy Installer ver. 0.0.1 *****\n");
    printf("************************************************\n");

    do {
        printf("\nPlease enter a project/directory name: ");
        scanf("%s", dir_project);
    } while (!isValidDirectory(dir_project));
    
    /***** INSTALLS *****/
    install = system("sudo apt update");
    install = system("sudo apt install nodejs");
    install = system("sudo apt install npm");

    /***** DIRECTORIES *****/
    strcpy(cmd, "mkdir ");
    strcat(cmd, dir_project);
    install = system(cmd);
    chdir(dir_project);
    system("mkdir server");
    chdir("server");


    /**** SERVER INITIALIZATION *****/
    install = system("npm init");
    install = system("npm install express mongoose");
    install = system("mkdir routes");
    install = system("mkdir models");
    install = system("touch index.js");
    install = system("touch routes/api.js");

    /***** CLIENT INITIALIZATION *****/
    chdir("..");
    install = system("npx create-react-app client");
    printf("\nMERN Stack Complete! Happy Coding!");
}

bool isValidDirectory(char dir[]) {
    //TODO make valid directory check function
    return true;
}
