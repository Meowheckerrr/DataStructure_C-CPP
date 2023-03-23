#include<stdio.h>
#include<math.h>

int compare(const void* a, const void* b){

    int A = *((int*)a);
    int B = *((int*)b);


    if(a>b) return 1;
    else return -1;
}

int absoluteCompare(int a,int b){ //絕對值sorting
    if(abs(a)>abs(b))return 1;
    else return -1;
}



void bubbleSort(int* A,int n,int(*compare)(const void*,const void*)){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(compare(&A[j],&A[j+1])>0){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main(){
    int i,A[]={3,2,1,5,6,4};
    bubbleSort(A,6,compare);
    for(i=0;i<6;i++) printf("%d",A[i]);
}