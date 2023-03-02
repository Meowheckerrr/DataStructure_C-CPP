#include<stdio.h>

int main(){

    int a =1025;
    int* p = &a;

    printf("size of interger is %d\n", sizeof(int));
    printf("address = %d, value =%d\n", p,*p );
    printf("address =%d, value=%d\n", p+1,*(p+1));

    char* p0;
    p0 = (char*)p; //typecasting 4byte->1byte
    printf("size of char is %d\n", sizeof(char));
    printf("address =%d, value=%d\n", p0,*p0);
    printf("address =%d, value=%d\n", p0+1,*(p0+1));

    // 1025 = 00000000 00000000 00000010 00000001
}