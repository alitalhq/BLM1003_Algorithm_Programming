// GitHub: https://github.com/alitalhq

/*
 * Define a character array and call a function that sorts this array alphabetically.
 * Print the largest 1st, 2nd, and 3rd characters of the sorted array on the screen.
 * (Alphabetical order: a, b, c, d, …)
 */

#include <stdio.h>
#include <string.h>

void sort_array(char array[]) {
    int n = strlen(array);
    char temp;
    
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main(void) {
    char array[100];
    
    printf("Enter something: ");
    fgets(array, sizeof(array), stdin);

    array[strcspn(array, "\n")] = '\0';
    printf("Original text: %s\n", array);

    sort_array(array);
    
    printf("Sorted text: %s\n", array);
    
    int n = strlen(array);
    
    if (n > 0) {
        printf("Largest 1st character: %c\n", array[n-1]);
    }
    if (n > 1) {
        printf("Largest 2nd character: %c\n", array[n-2]);
    }
    if (n > 2) {
        printf("Largest 3rd character: %c\n", array[n-3]);
    }
    
    return 0;
}
