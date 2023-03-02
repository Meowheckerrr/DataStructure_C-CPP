#include<stdio.h>

int main(){

    int a;
    int *p;  // 定義一個指向整數的指標變數 p
    p = &a;  // 把指標 p 指向變數 a 的記憶體位置

    a=10;
    printf("a= %d\n",*p);


    *p = 12;   // 透過指標 p 將變數 a 的值設為 12
    printf("a= %d\n",*p);
    retrun 0;
}