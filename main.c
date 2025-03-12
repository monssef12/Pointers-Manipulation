#include <stdio.h>
#include <stdlib.h>


void SwapTwoVar(int *a, int *b){ // third variable approach
    int temp = *a;
    *a = *b;
    *b = temp;
}

void PointerTraverseArr(int arr[], int size){ // using the pointers arithmetic traverse an array of integer
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
    int *pointer = ptr;

    // reading values
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("enter the %d number: ", i+1);
        scanf("%d", pointer);
        pointer ++;
    }
    for (int i = 0; i < size ; i++)
    {
        /* code */
        printf("the value %d is: %d\n", i + 1, ptr[i]);
    }
    
}

int main(){
    AllocateArr(5);
    return 0;
}