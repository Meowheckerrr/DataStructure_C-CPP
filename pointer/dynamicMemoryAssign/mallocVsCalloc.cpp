#include<stdio.h>
#include<stdlib.h>

int main(){
    int n =0;
    printf("sizeofArray");
    scanf("%d", &n);

    int *A = (int*)malloc(n*sizeof(int));

    printf("NO assign values(malloc)\n");
    for (int i=0;i<n;i++){
        printf("%d\n", A[i]);
    }
    free(A);

    int *B = (int*)calloc(n,sizeof(int));
    
    printf("NO assign values(calloc)\n");
    for (int j=0;j<n;j++){
        printf("%d\n", B[j]);
    }
    free(B);
}