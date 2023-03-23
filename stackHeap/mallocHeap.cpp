#include<stdio.h>
#include <stdlib.h>

int main(){

    int a ;// save in the stack
    int *p; // int pointer 
    p = (int*)malloc(sizeof(int));
    *p=10;
    
}



//free (p); // free variable p in the heap 
