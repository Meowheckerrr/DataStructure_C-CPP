#include<stdio.h>
#include<stdlib.h>


void PrintMeow(){
    printf("meow\n");
}

int *add(int* a, int* b){
    // printf("a var(addfunction) address is %d\n", &a);
    // printf("value of a var(addfunction) call by address is %d\n", a);

    // c-> useing heap assign memory space

    int* c =(int*)malloc(sizeof(int));
    *c=(*a)+(*b);
    return c;
}

int main(){
    int a=6,b=9;
    // printf("a var(mainfunction) address is %d\n", &a);
    // printf("%d\n",add(&a,&b));
    int* ptr = add(&a,&b);//未審麼這裡怪怪的
    PrintMeow();
    printf("Sum = %d \n", *ptr);
}