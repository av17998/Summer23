//GOALS 
//  Learn to work with classes and general object oriented stuff
//  Just get better at problem solving through code

#include <stdio.h>
#include "class.hpp"


int main(void) {
    char user1[32];
    char pass1[32];
    printf("Register a username and password\n");
    printf("Enter username: ");
    scanf_s ("%s", user1, 32);
    printf("Enter password: ");
    scanf_s ("%s", pass1, 32);

    login login1(user1, pass1);

    printf("User = %s pass = %s", login1.user, login1.pass);
    return(0);
}