// GitHub: https://github.com/alitalhq

/*
 * Write a program that takes a 4x4 matrix from the user, calculates the sum of each row and column, and finds the maximum sum.
 * 
 * Example input/output:
 * 
 * input:
 * 
 * A = {{1,2,3,4},
 *      {5,6,7,8},
 *      {9,10,11,12},
 *      {3,5,7,9}}
 * 
 * output:
 * 
 * Row sums: 10, 26, 42, 24
 * Column sums: 18, 23, 28, 33
 * Maximum sum: 42
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void){
    int row, col, max = INT_MIN;
    int array[4][4], row_sum[4] = {0}, col_sum[4] = {0};

    for (row = 0; row < 4; row++){
        for (col = 0; col < 4; col++){
            printf("\nEnter element for row %d, column %d: ", row + 1, col + 1);
            scanf("%d", &array[row][col]);
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            row_sum[i] += array[i][j];
        }
        if (row_sum[i] > max){
            max = row_sum[i];
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            col_sum[i] += array[j][i];
        }
        if (col_sum[i] > max){
            max = col_sum[i];
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%5d", array[i][j]);
        }
        printf("\n");
    }

    printf("\nRow sums: ");
    for (int i = 0; i < 4; i++){
        printf("%d ", row_sum[i]);
    }

    printf("\nColumn sums: ");
    for (int i = 0; i < 4; i++){
        printf("%d ", col_sum[i]);
    }

    printf("\nMaximum sum: %d\n", max);

    return 0;
}
