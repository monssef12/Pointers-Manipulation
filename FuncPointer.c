#include<stdio.h>

int add(int a, int b){return a+b;}
int substract(int a, int b){return a-b;}

int Calculation(int x, int y, int (* cal)(int a, int b)){ // define fun that takes a function pointer as parameter
    return cal(x, y);
};

int main(){
    int (* funpointer)(int a, int b); // define a function pointer
    funpointer = &add;  // assign the adress of one of the functions above and 
    // should have the same signature
    printf("the funpointer is pointing now to the addition funct and the result is: %d", funpointer(5, 7));


    printf("the calculation function takes the substract function as parameter and does the calculation: %d", Calculation(6,5,&substract));
    return 0;
}