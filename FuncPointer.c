#include<stdio.h>

int add(int a, int b){return a+b;}
int substract(int a, int b){return a-b;}
int multiply(int a, int b){return a*b;}
int divide(int a, int b){return a/b;}


int Calculation(int x, int y, int (* cal)(int a, int b)){ // define fun that takes a function pointer as parameter
    return cal(x, y);
};

int main(){
    int (* funpointer)(int a, int b); // define a function pointer
    funpointer = &add;  // assign the adress of one of the functions above and 
    // should have the same signature
    printf("the funpointer is pointing now to the addition funct and the result is: %d\n", funpointer(5, 7));

    // calling of the calculation function 
    printf("the calculation function takes the substract function as parameter and does the calculation: %d\n", Calculation(6,5,&substract));

    // Array of function pointers 
    int (* operations[])(int, int)  = {add, substract, multiply, divide};
    
    printf("addition is: %d\n", operations[0](3, 2)); 
    printf("substraction is: %d\n", operations[1](3, 2));
    printf("Product is: %d", operations[2](3, 2));
    return 0;
}