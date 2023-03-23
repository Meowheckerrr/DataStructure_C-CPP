//Pointer and arrays

#include<stdio.h>

int main(){

    int A[] = {2,3,4,5,6};
    // printf("A address = %d\n",A);
    // printf("A=1 address =%d\n",A+1);
    // printf("A[0] value = %d\n", *A);


    for(int i=0;i<5;i++){
        printf("A[%d] address =%d\n",i,&A[i]);
        printf("A[%d] address =%d\n",i, A+i);
        printf("A[%d] value =%d\n", i,*(A+i));

    }

}