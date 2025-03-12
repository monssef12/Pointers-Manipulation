#include <stdio.h>

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
        printf("the item %d is: %d\n", i, *pointer);
        pointer++;
        i++;
    }
}

int main(){
    int arr[5] = {1, 4, 3, 0, 3};
    PointerTraverseArr(arr, 5);
    return 0;
}