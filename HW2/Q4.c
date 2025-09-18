// GitHub: https://github.com/alitalhq

//Write a C program that calculates the area and perimeter of a rectangle whose side lengths are entered by the user.

#include <stdio.h>

int main(void)
{
    int side1, side2;

    printf("Please enter the two different sides of the rectangle with integer sides\n");
    scanf("%d %d", &side1, &side2);
    printf("Perimeter of the rectangle: %d\n", 2 * (side1 + side2));
    printf("Area of the rectangle: %d\n", side1 * side2);

    return 0;
}