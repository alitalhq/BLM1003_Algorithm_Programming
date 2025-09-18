// GitHub: https://github.com/alitalhq

/*
 * Write a program that counts how many times each vowel appears in a text string entered from the keyboard and prints the result on the screen.
 * (It should be done using recursion.)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void check_vowels(int count[], char text[], int index);

int main(void){
    char text[100];
    int count[5] = {0};
    int index = 0;
    printf("Please enter a text: ");
    fgets(text, sizeof(text), stdin);
    check_vowels(count, text, index);
    printf("Counts of vowels:\n");
    printf("a: %d\n", count[0]);
    printf("e: %d\n", count[1]);
    printf("i: %d\n", count[2]);
    printf("o: %d\n", count[3]);
    printf("u: %d\n", count[4]);
    return 0;
}

void check_vowels(int count[], char text[], int index){
    if (text[index] == '\0'){
        return;
    }
    if (text[index] == 'a' || text[index] == 'A'){
        count[0]++;
    }
    else if (text[index] == 'e' || text[index] == 'E'){
        count[1]++;
    }
    else if (text[index] == 'i' || text[index] == 'I'){
        count[2]++;
    }
    else if (text[index] == 'o' || text[index] == 'O'){
        count[3]++;
    }
    else if (text[index] == 'u' || text[index] == 'U'){
        count[4]++;
    }
    check_vowels(count, text, index+1);
}
