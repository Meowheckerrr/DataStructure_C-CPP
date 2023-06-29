#include<stdio.h>
#include<stdlib.h>

int main(){
    int 
    n;
    printf("intput size of the array");
    scanf("%d", &n);
    // A[n] 不能這樣寫
    int *A = (int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        A[i]=i+1;
        printf(" A[%d] = %d \n",i,*(A+i));
    }
    return 0;
}   