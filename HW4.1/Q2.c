// GitHub: https://github.com/alitalhq

/*
 * Write a function that finds the second largest element of an array with 10 elements, whose values are randomly determined between 10 and 90.
 * Write a function that calculates the standard deviation.
 * Write a function that calculates the harmonic mean.
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int second_largest(int numbers[]);
double standard_deviation(int numbers[]);
double harmonic_mean(int numbers[]);


int main(void) {
    int i,j;
    int numbers[10];
    srand(time(0));
    for (i=0;i<10;i++){
        numbers[i] = rand() % 81 + 10;
    }
    printf("array elements:\n");
    for (j=0; j<10; j++){
        printf("%d ", numbers[j]);
    }
    printf("\n");
    printf("second largest element: %d\n", second_largest(numbers));
    printf("standard deviation: %lf\n", standard_deviation(numbers));
    printf("harmonic mean: %lf\n", harmonic_mean(numbers));
    
    return 0;
}



int second_largest(int numbers[]){
    int i, largest = 0, second_largest = 0;
    
    for (i=0; i<10;i++){
        if (numbers[i] > largest){
            second_largest = largest;
            largest = numbers[i];
        }
        else if (numbers[i] > second_largest)
            second_largest = numbers[i];
        }
    return second_largest;
}


double standard_deviation(int numbers[]){
    int i, j;
    double mean=0, sum=0, result;
    for (i=0; i<10; i++){
        mean += numbers[i];
    }
    mean = mean/10;
    for (j=0; j<10; j++){
        sum += (mean - numbers[j]) * (mean - numbers[j]);
    }
    result = sqrt(sum/9);
    return result;
}


double harmonic_mean(int numbers[]){
    int i;
    double sum=0, result=0;
    for (i=0; i<10; i++){
        sum += 1.0 / numbers[i];
    }
    result = 10 / sum;
    return result;
}
