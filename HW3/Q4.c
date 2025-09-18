// GitHub: https://github.com/alitalhq

/*
 * Write a program that asks the user to enter an age and prints which category it belongs to based on the following ranges:
 * 1-17 = CHILD (18 not included)
 * 18-29 = YOUNG (30 not included)
 * 30-49 = MIDDLE (50 not included)
 * 50-95 = ELDERLY (95 included)
 * If the entered age is not within these ranges, print 'The entered age is not defined!'.
 * Use if-else statements.
 */

#include <stdio.h>

int main(void) {
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age >= 1 && age < 18) {
        printf("You are child\n");
    }
    else if (age >= 18 && age < 30) {
        printf("You are young\n");
    }
    else if (age >= 30 && age < 50) {
        printf("You are middle\n");
    }
    else if (age >= 50 && age <= 95) {
        printf("You are elderly\n");
    }
    else {
        printf("The entered age is not defined!\n");
    }
    
    return 0;
}