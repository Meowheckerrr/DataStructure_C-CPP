#include<stdio.h>
#include<string.h>

int main(){
    char C[]="meow";
    printf("size of byte =%d \n", sizeof(C)); //在沒定義長度下 auto 配 strlen +1 
    int len = strlen(C);
    printf("length =%d \n", len);
}