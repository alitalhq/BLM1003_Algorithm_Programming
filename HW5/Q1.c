// GitHub: https://github.com/alitalhq

/*
 * Define an integer array and call a function that reverses this array.
 * The reversing process will take the last element of the array and place it at the beginning,
 * the second-to-last element at the second position, and so on. Print the reversed array on the screen.
 * Original array: {2,5,7,9,1}
 * Reversed array: {1,9,7,5,2}
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    printf("Enter the number of array elements: ");
    scanf("%d",&n);
    int array[n];
    int reversed[n];
    for (int i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d",&array[i]);
    }
    int m;
    m = n-1;
    for (int i=0; i<n; i++){
        reversed[i] = array[m];
        m--;
    }
    printf("Original array: { ");
    for (int i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    printf("}\nReversed array: { ");
    for (int i=0; i<n; i++){
        printf("%d ", reversed[i]);
    }
    printf("}\n");
    
    return 0;
}
