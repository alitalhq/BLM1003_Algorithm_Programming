// GitHub: https://github.com/alitalhq

/*
 * Using the random function, create 3 matrices of size 5×6 with randomly generated values (values between 1–1000).
 * Create a 5×6 matrix named MaxResult and store in each cell the largest element among the corresponding cells of the 3 matrices.
 * Create a 5×6 matrix named MinResult and store in each cell the smallest element among the corresponding cells of the 3 matrices.
 * Create a 5×6 matrix named AvgResult and store in each cell the average of the corresponding cells of the 3 matrices.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void create_matrix(int array[5][6]);
void calculate(int array1[5][6], int array2[5][6], int array3[5][6], int MaxResult[5][6], int MinResult[5][6], int AvgResult[5][6]);
void print_matrix(int array[5][6]);

int main(void){
    int array1[5][6], array2[5][6], array3[5][6];
    int MaxResult[5][6], MinResult[5][6], AvgResult[5][6];
    srand((unsigned)time(NULL));
    
    create_matrix(array1);
    create_matrix(array2);
    create_matrix(array3);
    
    calculate(array1, array2, array3, MaxResult, MinResult, AvgResult);
    
    printf("Matrix 1:");
    print_matrix(array1);
    printf("Matrix 2:");
    print_matrix(array2);
    printf("Matrix 3:");
    print_matrix(array3);
    
    printf("Max Matrix:");
    print_matrix(MaxResult);
    printf("Min Matrix:");
    print_matrix(MinResult);
    printf("Average Matrix:");
    print_matrix(AvgResult);
    
    return 0;
}

void create_matrix(int array[5][6]){
    for (int i=0; i<5; i++) {
        for (int j=0; j<6; j++){
            array[i][j] = rand() % 1000 + 1;
        }
    }
    return;
}

void calculate(int array1[5][6], int array2[5][6], int array3[5][6], int MaxResult[5][6], int MinResult[5][6], int AvgResult[5][6]){
    for (int i=0; i<5; i++) {
        for (int j=0; j<6; j++){
            MaxResult[i][j] = fmax(fmax(array1[i][j], array2[i][j]), array3[i][j]);
            MinResult[i][j] = fmin(fmin(array1[i][j], array2[i][j]), array3[i][j]);
            AvgResult[i][j] = (array1[i][j] + array2[i][j] + array3[i][j]) / 3;
        }
    }
    return;
}

void print_matrix(int array[5][6]){
    printf("\n");
    for (int i=0; i<5; i++) {
        for (int j=0; j<6; j++){
            printf("%6d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return;
}
