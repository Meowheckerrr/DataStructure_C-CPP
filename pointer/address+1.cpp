#include<stdio.h>

int main(){

    int a = 10;
    int *p = &a;

    printf("address p is %d\n", p);
    printf("size of int is  %d\n", sizeof(int));
    printf("address p is %d\n", p+1);
}