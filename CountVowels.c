#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int CountVowels(char *str){ // count the vowels in a string by giving the pointer to the string
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) // iterate until reach the end of the string 
    {
        if ( str[i] == 'o' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'u'
            || str[i] == 'O' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'U')
        {
            count++;

        }
    }
    return count;

}

int main(){

    char str[] = "Embedded Systems";

    int vowelCount = CountVowels(str);
    printf("Number of vowels: %d\n", vowelCount);
    return 0;
}