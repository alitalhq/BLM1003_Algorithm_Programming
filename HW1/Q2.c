// GitHub: https://github.com/alitalhq

//Write a C program that checks whether a positive number entered by the user is odd or even.

#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if(number <= 0) {
        printf("The number is not positive.\n");
    } else {
        if(number % 2 == 0) {
            printf("The number is even.\n");
        } else {
            printf("The number is odd.\n");
        }
    }

    return 0;
}
