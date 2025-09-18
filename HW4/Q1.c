// GitHub: https://github.com/alitalhq

/*
 * You have an NxM matrix (each cell contains an integer, which can be negative or positive).
 * The sum of any rectangular submatrix inside this matrix is defined as the sum of all numbers in that rectangle.
 * Write a program that finds the rectangular submatrix with the maximum sum and returns this sum.
 * 
 * Example input/output:
 * 
 * input:
 * 
 * A = {{1,2,-1},
 *      {-3,4,5},
 *      {2,-6,8}}
 * 
 * output:
 * 
 * 11
 * 
 * Maximum Sum Submatrix = {{4,5},
 *                          {-6,8}}
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(void){
    int i, j, n, m, max = INT_MIN, start_n, start_m, end_n, end_m, max_start_n = -1, max_start_m = -1, max_end_n = -1, max_end_m = -1, sum = 0;
    srand((unsigned)time(0));
    n = rand() % 10 + 1;
    m = rand() % 10 + 1;
    int array[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            array[i][j] = rand() % 201 - 100;
        }
    }

    for (start_n = 0; start_n < n; start_n++){
        for (start_m = 0; start_m < m; start_m++){
            for (end_n = start_n; end_n < n; end_n++){
                for (end_m = start_m; end_m < m; end_m++){
                    for (i = start_n; i <= end_n; i++){
                        for (j = start_m; j <= end_m; j++){
                            sum = sum + array[i][j];
                        }
                    }
                    if(sum > max){
                        max = sum;
                        max_start_m = start_m;
                        max_start_n = start_n;
                        max_end_m = end_m;
                        max_end_n = end_n;
                    }
                    sum = 0;
                }
            }
        }
    }

    printf("Original Matrix (%dx%d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%5d", array[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMaximum Sum Submatrix (%d):\n", max);
    for (int k = max_start_n; k <= max_end_n; k++) {
        for (int l = max_start_m; l <= max_end_m; l++) {
            printf("%5d", array[k][l]);
        }
        printf("\n");
    }

    return 0;
}
