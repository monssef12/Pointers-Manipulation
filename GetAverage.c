#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float GetAverage(int *arr, int size){ // take a pointer to an int arr and return its average
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i); // or we can do arr[i] instead of *(arr + i)
    }
    return sum/size;
}

int main(){
    int arr[5] = {2,3,4,5,6};
    int size = 5;
    printf("the average of the array is: %f", GetAverage(&arr[0], size));
    return 0;
}