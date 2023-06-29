#include<stdio.h>
#include<iostream>
#include<stack> // stack from standard template library (STL)
#include<cstring> //gcc .\reverseString.cpp -o .\reverseString.exe -lstdc++ 
//ld.exe 需要將程序與 C++ 標準庫鏈接 確保編譯器和鏈接器可以找到所需的庫和可執行文件
using namespace std; // error: 'stack' was not declared in this scope; did you mean 'std::stack'?

void Reverser(char* C,int StringLength ){
    
    stack<char> S;
    
    // loop for push 
    for(int i=0; i<StringLength ; i++){
        S.push(C[i]);
    } 

    // loop for pop
    for (int i=0;i<StringLength ; i++){
        C[i] =S.top();
        S.pop();
    }

}


int main(){
    char C[50];
    printf("Enter a string\n");
    gets(C);
    Reverser(C,strlen(C));
    printf("output = %s ",C);
}
