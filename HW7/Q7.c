// GitHub: https://github.com/alitalhq

/*
 * Check whether the parentheses in a string are correctly matched. The types of parentheses are: (), {}, [].
 * The string may contain other characters as well. Only the balance of parentheses should be checked.
 * 
 * example:
 * 
 * (This [is a {test}] phrase.)
 * Parentheses are balanced.
 * (This [is a {test] prase.)
 * Parentheses are not balanced.
 */

#include <stdio.h>
#include <stdlib.h>

int check(char array[]);

int main(void){
    char array[100];
    printf("Enter a text: ");
    fgets(array, sizeof(array), stdin);
    if(check(array)){
        printf("Parentheses are balanced\n");
    }
    else{
        printf("Parentheses are not balanced\n");
    }
    return 0;
}

int check(char array[]){
    char stack[100];
    char value;
    int top = -1;
    for (int i = 0; array[i] != '\0'; i++){
        value = array[i];
        if (value == '(' || value == '{' || value == '['){
            top++;
            if (value == '('){
                stack[top] = ')';
            }
            else if (value == '['){
                stack[top] = ']';
            }
            else if (value == '{'){
                stack[top] = '}';
            }
        }
        if (value == ')' || value == '}' || value == ']'){
            if(top == -1){
                return 0;
            }
            else {
                if (stack[top] != value){
                    return 0;
                }
                else if(stack[top] == value){
                    top--;
                }
            }
        }
    }
    if (top == -1){
        return 1;
    }
    else {
        return 0;
    }
}
