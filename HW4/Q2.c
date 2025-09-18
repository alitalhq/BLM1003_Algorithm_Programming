// GitHub: https://github.com/alitalhq

/*
 * Write a program that traverses a matrix of size NxM in a spiral order and prints its elements.
 * The spiral order should go clockwise from the outside towards the inside.
 * 
 * Example input/output:
 * 
 * input:
 * 
 * A = {{1,2,3,4},
 *      {5,6,7,8},
 *      {9,10,11,12},
 *      {13,14,15,16}}
 * 
 * output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    int array[n][m];
    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            array[i][j] = rand() % 99 + 1;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%3d", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    int top = 0, left = 0, right = m-1, bottom = n-1;
    while (top <= bottom && left <= right){
        for (int k = left; k <= right; k++){
            printf("%3d", array[top][k]);
        }
        top++;
        for (int l = top; l <= bottom; l++){
            printf("%3d", array[l][right]);
        }
        right--;
        if (top <= bottom){
            for (int p = right; p >= left; p--){
                printf("%3d", array[bottom][p]);
            }
            bottom--;
        }
        if (left <= right){
            for (int r = bottom; r >= top; r--){
                printf("%3d", array[r][left]);
            }
            left++;
        }
    }
    
    printf("\n");
    return 0;
}
