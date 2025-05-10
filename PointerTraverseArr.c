#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void PointerTraverseArr(int arr[], int size){ // using the pointers arithmetic traverse an array of integers
    int i = 0;
    int *pointer = arr;
    while (i < size)
    {
        printf("the item %d is: %d\n", i, *(pointer + i)); 
        i++;
    }
}

int main(){
    int arr[5] = {4,3,4,2,0};
    PointerTraverseArr(arr, 5);
    return 0;
}