// GitHub: https://github.com/alitalhq

//Write a program that detects all the digits in a string and calculates the sum of these digits.

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char string[100];
    int sum = 0;

    printf("Enter a string containing both numbers and letters: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++) {
        if (isdigit(string[i])) {
            sum += string[i] - 48;
        }
    }

    printf("Sum of the digits in the string: %d\n", sum);

    return 0;
}
