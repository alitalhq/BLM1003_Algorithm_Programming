// GitHub: https://github.com/alitalhq

/* 
 * You are asked to write a program that calculates the following functions.
 * The user will enter a value for X, and using this value, the approximate value of each function will be calculated using the first 100 terms.
 * In the program, each term should be calculated separately, stored in a one-dimensional array, and then summed to obtain the final result.
 *
 * Formulas:
 * e^x = 1 + x + x^2 / 2! + x^3 / 3! + ...
 * sin(x) = x - x^3 / 3! + x^5 / 5! - ...
 * cos(x) = 1 - x^2 / 2! + x^4 / 4! - ...
 */

#include <stdio.h>
#include <math.h>

#define TERMS 100

int main(void) {
    double x;
    double e_terms[TERMS], sin_terms[TERMS], cos_terms[TERMS];
    double e_result = 0, sin_result = 0, cos_result = 0;
    double factorial;
    int i;

    printf("Enter a value for X: ");
    scanf("%lf", &x);

    for(i = 0; i < TERMS; i++) {
        factorial = 1;
        for(int j = 1; j <= i; j++)
            factorial *= j;
        e_terms[i] = (i == 0) ? 1 : pow(x, i) / factorial;
        e_result += e_terms[i];
    }

    for(i = 0; i < TERMS; i++) {
        factorial = 1;
        int exp = 2*i + 1;
        for(int j = 1; j <= exp; j++)
            factorial *= j;
        sin_terms[i] = ((i % 2 == 0) ? 1 : -1) * pow(x, exp) / factorial;
        sin_result += sin_terms[i];
    }

    for(i = 0; i < TERMS; i++) {
        factorial = 1;
        int exp = 2*i;
        for(int j = 1; j <= exp; j++)
            factorial *= j;
        cos_terms[i] = ((i % 2 == 0) ? 1 : -1) * pow(x, exp) / factorial;
        cos_result += cos_terms[i];
    }

    printf("Approximate e^x: %.15lf\n", e_result);
    printf("Approximate sin(x): %.15lf\n", sin_result);
    printf("Approximate cos(x): %.15lf\n", cos_result);

    return 0;
}
