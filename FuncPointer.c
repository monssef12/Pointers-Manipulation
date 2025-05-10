#include<stdio.h>

int add(int a, int b){return a+b;}
int substract(int a, int b){return a+b;}

int main(){
    int (* funpointer)(int a, int b); // define a function pointer
    funpointer = &add;  // assign the adress of one of the functions above, should have the same signature
    printf("the funpointer is pointing now to the addition funct and the result is: %d", funpointer(5, 7));

    return 0;
}