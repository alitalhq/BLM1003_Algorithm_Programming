// GitHub: https://github.com/alitalhq

//Write a C program that checks whether a 3-digit number entered by the user is equal to the sum of the cubes of its digits.

#include <stdio.h>
#include <math.h>

int main(void)
{
    int number, hundreds, tens, units, sum;
    printf("Please enter a 3-digit number: ");
    scanf("%d", &number);
    
    hundreds = number / 100;
    tens = (number / 10) % 10;
    units = number % 10;
    
    sum = pow(hundreds, 3) + pow(tens, 3) + pow(units, 3);
    
    if (sum == number)
    {
        printf("Sum of cubes of digits: %d\nand it is equal to the entered number.\n", sum);
    }
    else
    {
        printf("Sum of cubes of digits: %d\nand it is not equal to the entered number.\n", sum);
    }
    return 0;
}