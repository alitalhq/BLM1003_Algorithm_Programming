// GitHub: https://github.com/alitalhq

/*
 * Ask the user to enter 2 numbers from the keyboard.
 * Then use a switch-case to ask which operation the user wants to perform with these 2 numbers (+, -, *, /).
 * Print the result on the screen according to the user's choice.
 */

#include <stdio.h>

int main(void)
{
    float number1, number2;
    char operation;

    printf("Please enter a number\n");
    scanf("%f", &number1);
    printf("Please select the operation you want to perform (+, -, *, /)\n");
    scanf(" %c", &operation);
    printf("Please enter the other number\n");
    scanf("%f", &number2);

    switch (operation){
        case '+':
            printf("Operation result: %f\n", number1 + number2);
            break;
        case '-':
            printf("Operation result: %f\n", number1 - number2);
            break;
        case '*':
            printf("Operation result: %f\n", number1 * number2);
            break;
        case '/':
            if(number2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Operation result: %f\n", number1 / number2);
            }
            break;
        default:
            printf("Please select a valid operation\n");
            break;
    }

    return 0;
}
