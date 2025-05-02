#include<stdio.h>
#include<string.h>


struct Student
{
    char name[20];
    int age;
    char ID[8];
    /* data */
};


int main(){
    struct Student jack = {"jack", 23, "A12"};
    struct Student *pointertostruct = & jack;

    printf("the age of %s is %d\n", pointertostruct->name, pointertostruct->age);

    // or 

    printf("the age of %s is %d", (*pointertostruct).name, (*pointertostruct).age);


    return 0;
}