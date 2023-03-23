#include<stdio.h>

void meowhecker(char *name){
    printf("%s is king\n", name );
}


int add(int a, int b){
    return a+b;
}

// int *p(int,int) //declaring a function that would return a pointer


int main(){
    // pointer to function 
    // a pointer called p 
    //(int,int) as argument/parameter and return int  
    int (*p)(int,int); // function pointer
    p=&add;

    int c ;
    c = (*p)(2,3);
    printf("%d\n",c);

    void (*ptr)(char*);
    ptr=meowhecker;
    ptr("meowhecker"); //"meowhecker <-> array來存 "
}