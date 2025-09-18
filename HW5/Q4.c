// GitHub: https://github.com/alitalhq

//Write a program that encrypts a string. Each letter will be shifted forward by 3 letters.

#include <stdio.h>
#include <string.h>

int main(void) {
    char word[100];

    printf("Enter a word: ");
    fgets(word, sizeof(word), stdin);

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] = (word[i] + 3);
        }
        else if (word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = (word[i] + 3);
        }
    }
    printf("Encrypted word: %s", word);

    return 0;
}