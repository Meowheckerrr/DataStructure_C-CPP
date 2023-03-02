#include<stdio.h>

void increment(int a){

    a=a+1;
    printf("a address = %d\n", &a); //local1
}

int main(){

    int a;
    a =10;  
    increment(a);
    printf("a address = %d", &a); //local2
}