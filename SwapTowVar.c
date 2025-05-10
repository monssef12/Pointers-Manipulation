#include<stdio.h>
void SwapTwoVar(int *a, int *b){ // swap two variables using third variable approach
    int temp = *a;
    *a = *b;
    *b = temp;
}



// print tsructure values using its pointer 


int main(){
    int a = 3;
    int b = 4;
    SwapTwoVar(&a, &b);
    printf("a is: %d \nb is: %d", a, b);
    return 0;
}