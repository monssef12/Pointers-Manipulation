#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void SwapTwoVar(int *a, int *b){ // swap two variables using third variable approach
    int temp = *a;
    *a = *b;
    *b = temp;
}

void PointerTraverseArr(int arr[], int size){ // using the pointers arithmetic traverse an array of integers
    int i = 0;
    int *pointer = arr;
    while (i < size)
    {
        printf("the item %d is: %d\n", i, *(pointer + i)); 
        i++;
    }
}

void AllocateArr(int size){ // this function allocates an array of int with a given size dynamicaly and we assign the values all of that using pointers
    int *ptr = (int *)malloc(sizeof(int)*size);
    // reading values
    for (int i = 0; i < size; i++)
    {
        printf("enter the %d number: ", i+1);
        scanf("%d", &ptr[i]);     // note: ptr[i] <=> *(ptr + i)
    }
    // printing values
    for (int i = 0; i < size ; i++)
    {        
        printf("the value %d is: %d\n", i + 1, ptr[i]);
    }
    
}

void CheckPointerNull(int *ptr){ // this function takes an int pointer and return weather it is a null pointer or not
    if (ptr == NULL)
    {
        printf("the pointer is NULL \n");
    }
    else{printf("the pointer is not NULL \n");}
    // NULL pointers are pointer that doesn't point to anything 
}


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
    
float GetAverage(int *arr, int size){ // take a pointer to an int arr and return its average
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i); // or we can do arr[i] instead of *(arr + i)
    }
    return sum/size;
}

int main(){
    int arr[5] = {1,2,5,6,4};
    printf("the average is : %f", GetAverage(&arr[0], 5));
    return 0;
}