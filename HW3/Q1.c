// GitHub: https://github.com/alitalhq

/*
 * A Floyd triangle is a right-angled triangle formed by arranging consecutive counting numbers in left-aligned order,
 * with each row containing as many numbers as the row number.
 * It produces an output as shown below. Write a program that prints the Floyd triangle based on the number of rows entered from the keyboard.
 * 
 * Example input/output:
 * 
 * Enter the number of rows: 8
 * 
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10
 * 11 12 13 14 15
 * 16 17 18 19 20 21
 * 22 23 24 25 26 27 28
 * 29 30 31 32 33 34 35 36"
 */

#include <stdio.h>

int main(void) {
    int i, j, k = 1, number;
    printf("Enter the number of rows: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d\t", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}