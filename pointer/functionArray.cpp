#include<stdio.h>
// int A[] == int* A
int sumOfElement(int* A){  
    int i, sum=0;
    int size = sizeof(A)/sizeof(A[0]);
    printf("SOE- size of A =%d\n",sizeof(A));
    for(i=0;i<size;i++){
        sum+=A[i];
    }
    return sum;

}

int main (){

    int A[]={1,2,3,4,5};
    printf("Main- size of A =%d\n",sizeof(A));
    int total = sumOfElement(A);
    printf("sum of elements = %d\n",total);

}