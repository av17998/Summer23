#define _CRT_SECURE_NO_WARNINGS
#include "userdatabase.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

login::login(int registered) {
    
}

void login::registerUser() {
    if (registered == 1) {
        printf("\nUser already registered, try logging in.\n");
        
    }
    else {
        printf("Enter username to register: ");
        scanf_s("%s", user, 32);
        printf("Enter password to register: ");
        scanf_s("%s", pass, 32);
        registered = 1;
    }
}

void login::signin() {
    char* inputusername;
    char* inputpassword;
    inputusername = (char*) malloc(32 * sizeof(char));
    inputpassword = (char*) malloc(32 * sizeof(char));
    if (registered == 0) {
        printf("\nUser not registed yet, try registering a username and password.\n");
    }
    else {

        do {
            printf("Enter username: ");
            scanf("%s", inputusername);
            printf("Enter password: ");
            scanf("%s", inputpassword);

            if (!(strcmp(inputusername, user)) && !(strcmp(inputpassword, pass))) {
                printf("You have successfully logged in.\nWelcome %s!", user);
            }
            else {
                printf("The input username or password does not match the registed account, try again.\n");
            }

        } while (strcmp(inputusername, user) || strcmp(inputpassword, pass));
    }
}