// GitHub: https://github.com/alitalhq

//Write a C program that finds the smallest number among four numbers entered from the keyboard.

#include <stdio.h>

int main(void)
{
    int number1, number2, number3, number4, min;
    printf("Enter four numbers\n");
    scanf("%d %d %d %d", &number1, &number2, &number3, &number4);
    if (number1 < number2) {
        min = number1;
    }
    else
        min = number2;
    if (number3 < min) {
        min = number3;
    }
    if (number4 < min) {
        min = number4;
    }
    printf("Smallest number = %d\n", min);
    return(0);
}