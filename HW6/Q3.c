// GitHub: https://github.com/alitalhq

//Using functions, return the integer part, fractional part, and sign (negative, positive) of a decimal number. Also write the main program.

#include <stdlib.h>
#include <stdio.h>

char find_sign(float num);
int find_integer(float num);
float find_fraction(float num);

int main(void){
    float num;
    printf("Enter a decimal number: ");
    scanf("%f",&num);
    char sign = find_sign(num);
    int integer_part = find_integer(num);
    float fraction_part = find_fraction(num);
    
    printf("Sign of the entered number: %c\n", sign);
    printf("Integer part of the entered number: %d\n", integer_part);
    printf("Fractional part of the entered number: %f\n", fraction_part);
    
    return 0;
}

char find_sign(float num){
    if (num > 0){
        return '+';
    }
    else if (num < 0){
        return '-';
    }
    return '0';
}

int find_integer(float num){
    if (num < 0){
        num *= -1;
    }
    return (int)num;
}

float find_fraction(float num){
    if (num < 0){
        num *= -1;
    }
    int integer_part = (int)num;
    return num - integer_part;
}