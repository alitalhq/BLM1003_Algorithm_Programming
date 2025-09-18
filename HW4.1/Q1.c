// GitHub: https://github.com/alitalhq

/*
 * A repetitive (iterative) method for finding the square root of a given number N has been used since Babylonian times.
 * This method works iteratively as follows:
 * 
 * I. Enter the number whose square root is to be found and an initial guess value for the square root (x0)
 * II. The next guess value is calculated as follows:
 *     x1 = (1/2) * ( x0 + ( N / x0 ) )
 *     This equation can be generalized as:
 *     x(n+1) = (1/2) * ( x(n) + ( N / x(n) ) )
 * III. The square of the newly calculated guess value is subtracted from the number to calculate the error.
 * IV. Steps II and III are repeated until the error reaches a value smaller than the specified error.
 * 
 * Write a program that calculates the square root using a number and initial guess entered from the keyboard. Use an error value of 0.002
 */

#include <stdio.h>
 
double squareRoot(int n, double guess);
 
int main() {
    int n;
    double guess;
 
    printf("Enter the number you want to find the square root of: ");
    scanf("%d", &n);
     
    printf("Enter the initial guess: ");
    scanf("%lf", &guess);
 
    printf("The approximate square root of %d is: %f\n", n, squareRoot(n, guess));
 
    return 0;
}

double squareRoot(int n, double guess) {
    while(guess * guess - n < -0.002 || guess * guess - n > 0.002){
        guess = (guess + (n / guess)) / 2;
    }
    return guess;
}