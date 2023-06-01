//GOALS 
//  Learn to work with classes and general object oriented stuff
//  Just get better at problem solving through code

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "userdatabase.h"


int main(void) {
    int input;

    login login(0);

    do {
        printf("Please type 1 to register an account or 2 to login to an account: ");
        scanf_s("%d", &input);
        
        if (input == 1) {
            login.registerUser();
        }
        else if (input == 2) {
            login.signin();
        }
        else {
            printf("Please select a valid option.\n");
        }
    } while (input != 2);

    return(0);
}