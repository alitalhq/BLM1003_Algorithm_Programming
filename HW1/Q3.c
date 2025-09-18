// GitHub: https://github.com/alitalhq

//Write a C program that finds the largest number among three numbers entered by the user.

#include <stdio.h>

int main(void) {
    float num1, num2, num3, largest;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    largest = num1;

    if(num2 > largest) {
        largest = num2;
    }

    if(num3 > largest) {
        largest = num3;
    }

    printf("The largest number is: %.2f\n", largest);

    return 0;
}
