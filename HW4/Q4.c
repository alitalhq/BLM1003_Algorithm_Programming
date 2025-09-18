// GitHub: https://github.com/alitalhq

/*
 * You are trying to find a hidden treasure on an island map. The map is a 3x3 matrix, and each element must be an integer between 0 and 9.
 * The user must enter each element of the matrix one by one.
 * After the map is created, find the largest number in the matrix and its position (row and column).
 * Then, calculate the sum of the top, bottom, left, and right neighbors of this largest number.
 * If the number is on the edge, consider only the existing neighbors. If the sum is greater than 15, print 'Treasure found!'.
 * Otherwise, print 'Treasure not found.'
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int map[3][3];
    int largest = -1, row_idx = -1, col_idx = -1, total = 0;

    printf("Please enter the elements as digits (0-9)");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("\nEnter element for row %d, column %d: ", i+1, j+1);
            scanf("%d", &map[i][j]);
            if (map[i][j] > largest){
                largest = map[i][j];
                row_idx = i;
                col_idx = j;
            }
        }
    }

    switch (row_idx) {
        case 0:
            total += map[1][col_idx];
            break;
        case 1:
            total += map[0][col_idx] + map[2][col_idx];
            break;
        case 2:
            total += map[1][col_idx];
            break;
    }

    switch (col_idx) {
        case 0:
            total += map[row_idx][1];
            break;
        case 1:
            total += map[row_idx][0] + map[row_idx][2];
            break;
        case 2:
            total += map[row_idx][1];
            break;
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%2d", map[i][j]);
        }
        printf("\n");
    }

    printf("Your score: %d", total);

    if (total > 15){
        printf("\nTreasure found!\n");
    }
    else {
        printf("\nTreasure not found.\n");
    }

    return 0;
}
