#include<stdio.h>

int main(){

    int x = 5;
    int *p;
    p=&x;
    *p=6;

    int **q;
    q=&p;
    int ***r;
    r=&q;

    printf("*p = %d\n",*p);
    printf("*q = %d\n",*q);
    printf("*(*q) = %d\n", *(*q));
    printf("*(*r) = %d\n",*(*r));
    printf("*(*(*r)) = %d\n",*(*(*r)));

    ***r = 10;
    printf("x=%d\n",x);

    **q = *p +10;
    printf("x=%d",x);
}