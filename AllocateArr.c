#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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


int main(){
    AllocateArr(5);
    return 0;
}