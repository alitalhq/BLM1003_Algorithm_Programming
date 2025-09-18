// GitHub: https://github.com/alitalhq

/*
 * Write a C program that calculates the average of four numbers entered from the keyboard (all less than 1000)
 * Then finds the number greater than the average and closest to it, and prints it.
 */

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, closest_num;
    float avg;
    closest_num = 1000;
    printf("Enter four numbers (you can enter values up to 1000)\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    avg = (num1 + num2 + num3 + num4) / 4.0;
    
    if (num1 >= avg && num1 <= closest_num) {
        closest_num = num1;
    }
    if (num2 >= avg && num2 <= closest_num) {
        closest_num = num2;
    }
    if (num3 >= avg && num3 <= closest_num) {
        closest_num = num3;
    }
    if (num4 >= avg && num4 <= closest_num) {
        closest_num = num4;
    }
    
    if (closest_num >= 1000) {
        printf("Please enter numbers smaller than 1000\n");
    }
    else {
        printf("Average = %.2f\nNumber greater than average and closest to it = %d\n", avg, closest_num);
    }
    
    return 0;
}