// GitHub: https://github.com/alitalhq

//Write a C program that prints the type of a triangle based on the three sides entered from the keyboard.

#include <stdio.h>

int main(void) {
    float side1, side2, side3;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {

        if (side1 == side2 && side2 == side3) {
            printf("Equilateral triangle\n");
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("Isosceles triangle\n");
        }
        else {
            printf("Scalene triangle\n");
        }

    } else {
        printf("Not a triangle\n");
    }

    return 0;
}
