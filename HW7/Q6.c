// GitHub: https://github.com/alitalhq

/*
 * Write a program that asks the user to enter a single odd integer between 1 and 19,
 * and draws a diamond with that number of rows. (For example, if 5 is entered, it should draw as below.)
 * 
 *    *
 *   * *
 *  * * *
 *   * *
 *    *
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

void print_spaces(int count, int center);
void print_stars(int count, int center);

int main(void){
    int rows;
    printf("Please enter a single odd integer between 1 and 19: ");
    scanf("%d",&rows);
    if(rows % 2 == 0){
        printf("Please enter an odd number\n");
        return 0;
    }
    else if(rows < 1 || rows > 19){
        printf("Please enter a number within the specified range\n");
        return 0;
    }
    int center = (1 + rows) / 2;
    for(int i = 1; i <= rows; i++){
        if(i <= center){
            print_spaces(i, center);
            print_stars(i, center);
            printf("\n");
        }
        if(i > center){
            print_spaces(i, center);
            print_stars(rows - i + 1, center);
            printf("\n");
        }
    }
    
    printf("\n");
    return 0;
}

void print_spaces(int count, int center){
    int spaces = abs(center - count);
    for (int i = 0; i < spaces; i++){
        printf(" ");
    }
    return;
}

void print_stars(int count, int center){
    for (int i = 0; i < count; i++){
        printf("* ");
    }
    return;
}
