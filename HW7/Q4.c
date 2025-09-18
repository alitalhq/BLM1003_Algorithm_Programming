// GitHub: https://github.com/alitalhq

/*
 * A list of points is given in the form of (x, y) pairs. Sort these points according to the following rules: L = √(x^2 + y^2)
 * Sort in ascending order based on the Euclidean distance from the origin (0,0).
 * If two points have the same distance, sort by the x-coordinate in ascending order.
 * If distance and x-coordinate are the same, sort by the y-coordinate in ascending order.
 * 
 * Example:
 * Points: (3, 4) (1, 2) (0, 0) (1, 1) (2, 2)
 * Sorted points: (0, 0) (1, 1) (1, 2) (2, 2) (3, 4)
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){
    srand((unsigned int)time(NULL));
    int temp[2];
    int num_points = rand() % 6 + 3;
    int points[num_points][2];
    printf("Points: ");
    for (int i=0; i<num_points; i++){
        points[i][0] = rand() % 21 - 10;
        points[i][1] = rand() % 21 - 10;
        printf("(%d,%d)", points[i][0], points[i][1]);
    }
    printf("\n");

    for(int i=0; i < num_points-1; i++){
        for(int j=0; j < num_points-i-1; j++){
            if((points[j][0]*points[j][0] + points[j][1]*points[j][1]) > 
               (points[j+1][0]*points[j+1][0] + points[j+1][1]*points[j+1][1])){
                temp[0] = points[j][0];
                temp[1] = points[j][1];
                points[j][0] = points[j+1][0];
                points[j][1] = points[j+1][1];
                points[j+1][0] = temp[0];
                points[j+1][1] = temp[1];
            }
            else if ((points[j][0]*points[j][0] + points[j][1]*points[j][1]) ==
                     (points[j+1][0]*points[j+1][0] + points[j+1][1]*points[j+1][1])){
                if (points[j][0] > points[j+1][0]){
                    temp[0] = points[j][0];
                    temp[1] = points[j][1];
                    points[j][0] = points[j+1][0];
                    points[j][1] = points[j+1][1];
                    points[j+1][0] = temp[0];
                    points[j+1][1] = temp[1];
                }
                else if (points[j][0] == points[j+1][0]){
                    if (points[j][1] > points[j+1][1]){
                        temp[0] = points[j][0];
                        temp[1] = points[j][1];
                        points[j][0] = points[j+1][0];
                        points[j][1] = points[j+1][1];
                        points[j+1][0] = temp[0];
                        points[j+1][1] = temp[1];
                    }
                }
            }
        }
    }

    printf("Sorted points: ");
    for (int i=0; i<num_points; i++){
        printf("(%d,%d)", points[i][0], points[i][1]);
    }
    printf("\n");
    return 0;
}
