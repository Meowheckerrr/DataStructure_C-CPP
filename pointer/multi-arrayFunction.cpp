#include<stdio.h>

int funA(int* A){

    printf("&A[0]=%d\n", A);
    return 0;

}


int funB(int (*B)[3]){  //b[][3]
    printf("*B=%d\n",*B);
    return 0;
}


int funC(int (*C)[2][2]){
    return 0;
}

int main(){

    int A[]={1,2};
    funA(A);

    int B[2][3]={{1,2,3},{4,5,6}}; //B retrun  int (*)[3]
    funB(B);

    int C[3][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}},
        {{9, 1}, {2, 3}}
    };
    funC(C);

    return 0;
}