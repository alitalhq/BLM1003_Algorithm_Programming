// GitHub: https://github.com/alitalhq

/*
 * Two numbers and an operation operator (char type) will be entered from the keyboard (+, -, *, /, %)
 * Write a function that performs the operation according to the entered operator for the two numbers and returns the result,
 * and write the main program (driver) that uses this function.
*/

#include <stdio.h>
#include <stdlib.h>

float calculate(int num1, int num2, char operation);

int main(void){
    int num1, num2;
    char operation;
    int result;
    
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Choose the operation you want (+,-,*,/,%%): ");
    scanf(" %c",&operation);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    
    result = calculate(num1, num2, operation);
    printf("Result of the operation: %d\n", result);
    return 0;
}

float calculate(int num1, int num2, char operation) {
    switch (operation) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0) {
                printf("DIVISION BY ZERO ERROR\n");
                return 0;
            } else {
                return num1 / num2;
            }
        case '%':
            if (num2 == 0) {
                printf("DIVISION BY ZERO ERROR\n");
                return 0;
            } else {
                return num1 % num2;
            }
        default:
            printf("INVALID OPERATION\n");
            return 0;
    }
}
