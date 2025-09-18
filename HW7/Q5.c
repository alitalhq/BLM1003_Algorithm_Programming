// GitHub: https://github.com/alitalhq

/*
 * Write a program that assigns 10 random numbers between 1 and 1000 to an array of 10 elements.
 * For each value, print the value and the total number of characters written so far.
 * Use the %d format specifier to print the number of characters used.
 * The output should look like the following:
 * 
 * Value - Total character count
 * 342     3
 * 1000    7
 * 963     10
 * 6       11
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int main(void){
    srand((unsigned)time(NULL));
    int array[10];
    int characters = 0;
    for (int i = 0; i < 10; i++){
        array[i] = rand() % 1000 + 1;
    }
    printf("Value   -   Total character count\n");
    for(int i = 0; i < 10; i++){
        printf("%-10d %10d\n", array[i], (characters + (int)log10(array[i])) + 1);
        characters += (int)log10(array[i]) + 1;
    }
    
    return 0;
}
