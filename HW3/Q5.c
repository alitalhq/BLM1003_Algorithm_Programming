// GitHub: https://github.com/alitalhq

//Write a program that checks whether a character entered from the keyboard is an uppercase letter,a lowercase letter, a digit, or a special character (e.g., ., , ? + & %)

#include <stdio.h>

int main(void) {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);

    if (character >= 'A' && character <= 'Z') {
        printf("The character you entered is an uppercase letter.\n");
    }
    else if (character >= 'a' && character <= 'z') {
        printf("The character you entered is a lowercase letter.\n");
    }
    else if (character >= '0' && character <= '9') {
        printf("The character you entered is a digit.\n");
    }
    else {
        printf("The character you entered is a special character.\n");
    }
    return 0;
}