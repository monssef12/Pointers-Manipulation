#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void CheckPointerNull(int *ptr){ // this function takes an int pointer and return weather it is a null pointer or not
    if (ptr == NULL)
    {
        printf("the pointer is NULL \n");
    }
    else{printf("the pointer is not NULL \n");}
    // NULL pointers are pointer that doesn't point to anything 
}



int main(){


    return 0;
}