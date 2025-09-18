// GitHub: https://github.com/alitalhq

/*
 * Write a program that stores student names in a two-dimensional string array (for 10 different students)
 * and randomly generates the results of a Christmas gift exchange.
 * (A student cannot get a gift for themselves, and each student participates in the gift selection only once.)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void){
    char names[10][50] = {"Ali", "Talha", "Ayşe", "Emirhan", "Yusuf", "Buse", "Seren", "Bahadır", "Merve", "Salih"};
    int order[10];
    int temp;
    srand((unsigned)time(NULL));
    
    for (int i=0; i<10; i++){
        order[i] = i;
    }
    for (int i=9; i>0; i--){
        int a;
        a = rand() % i;
        temp = order[a];
        order[a] = order[i];
        order[i] = temp;
    }
    printf("Gift exchange results:\n");
    for (int i=0; i<10; i++){
        printf("%s -> %s\n", names[i], names[order[i]]);
    }
    
    return 0;
}
