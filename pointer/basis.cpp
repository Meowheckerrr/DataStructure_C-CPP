#include<stdio.h>

int main(){
    int a;
    int *pointer;
    a=99;
    pointer = &a;

    printf("%d\n",pointer);
    printf("%d\n",*pointer);

}