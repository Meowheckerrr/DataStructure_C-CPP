#include<stdio.h>

int main(){
    int a =105;
    int *p;
    p=&a;
    printf("size of the interger =%d\n", sizeof(int));
    printf("address=%d, value=%d\n", p,*p);
    // void pointer - Genric pointer

    void *p0;  //void pointer 
    p0 = p;

    printf("address = %d", p0);
    //printf("address = %d\n", p0+1);  沒辦法加memory address 因為她不知道要加多少
    //printf("value=%d, *p0"); 也沒辦法 他不知要取多少bytes 


}