// GitHub: https://github.com/alitalhq

/*
 * Ask the user to enter an integer between 1 and 10000. Using switch-case, display the following messages based on the entered number:
 * If the number is between 1 and 10: 'The number is between 1 and 10'
 * If the number is between 11 and 100: 'The number is between 11 and 100'
 * If the number is between 101 and 1000: 'The number is between 101 and 1000'
 * If the number is between 1001 and 10000: 'The number is between 1001 and 10000'
 */

 #include <stdio.h>

int main(void)
{
    int number, control;
    printf("Please enter an integer between 1 and 10000\n");
    scanf("%d", &number);
    
    if (number >= 1 && number <= 10) {
        control = 1;
    }
    else if (number > 10 && number <= 100) {
        control = 2;
    }
    else if (number > 100 && number <= 1000) {
        control = 3;
    }
    else if (number > 1000 && number <= 10000) {
        control = 4;
    }
    else {
        control = 5;
    }
    
    switch (control) {
        case 1:
            printf("The number is between 1 and 10\n");
            break;
        case 2:
            printf("The number is between 11 and 100\n");
            break;
        case 3:
            printf("The number is between 101 and 1000\n");
            break;
        case 4:
            printf("The number is between 1001 and 10000\n");
            break;
        case 5:
            printf("Please enter a number within the specified range\n");
            break;
    }

    return 0;
}