// GitHub: https://github.com/alitalhq

//Write a function and main program that generates a random string of a specified length, consisting of alternating vowels and consonants.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_word(int length, char word[]);
int main(void){
    int length;
    printf("Enter the number of letters for the randomly generated word: ");
    scanf ("%d",&length);
    char word[length+1];
    srand((unsigned)time(NULL));
    printf("Your word: ");
    generate_word(length, word);
    return 0;
}

void generate_word(int length, char word[]){
    char vowels[] = {'a','e','i','o','u'};
    char consonants[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};

    for (int i=0; i<length; i++) {
        if (i%2 == 0) {
            word[i] = consonants[rand() % 21];
        }
        else {
            word[i] = vowels[rand() % 5];
        }
    }
    word[length] = '\0';
    printf("%s\n", word);
}
