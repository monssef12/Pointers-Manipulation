#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ReverseString(char *str){ 
    char *start = str; // pointer to the first char
    char *end = str + strlen(str) - 1;  // pointer to the last char
    while (start < end) 
    { 
        char current = *start; 
        *start = *end; 
        *end = current; 
        start++; 
        end--; 
    } 
}

int main(){
    char string[10] = "toilet";
    ReverseString(&string[0]);
    printf("the reversed string is: %s", &string);
    return 0;
}