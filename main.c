#include <stdio.h>

void SwapTwoVar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 7;
    int b = 6;
    SwapTwoVar(&a, &b);
    printf("the number a is: %d\n", a);
    printf("the number b is: %d", b);
    return 0;
}