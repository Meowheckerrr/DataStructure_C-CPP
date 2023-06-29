
//pseudo code
// int a[10]
// int top =-1

// push(value){
//     top =top+1
//     a[top]=value
// }

// pop(){
//     top = top -1 // we dont'care about the garbage value 
// }

// top(){
//     return a[top]
// }

// IsEmtpty(){
//     if(top == -1) return true;
//     else return false;
// }

#include<stdio.h>
#define max 100

// int stack[max];
// int top = -1; //intitial stack top index

// void Push(int value){

//     //Avoid stack overflow
//     if (top == max -1 ){
//         printf("error: stack overflow");
//         return;
//     }

//     top = top +1;
//     stack[top]=value; 
//     // stack[++top] = value 另一總寫法 (top 先加)
// }

// void Pop(){
//     if (top == -1){
//         printf("stack is empty!!!");
//         return ;
//     }
//     top = top -1;
// }

// int Top(){
//     return stack[top];
// }

// bool IsEmpty(){
//     if(top == -1) return true;
//     else return false;
// }

// void printStack(){

//     printf("stack: ");
//     for(int i=0;i<=top;i++){
//         printf("%d ", stack[i]);
//     }
//     printf("\n");
// }


class stack{

    private:
        char stack [100];
        int top = -1;
        
    public:
        void Push(int value){

        //Avoid stack overflow
        if (top == max -1 ){
            printf("error: stack overflow");
            return;
        }

        top = top +1;
        stack[top]=value; 
        // stack[++top] = value 另一總寫法 (top 先加)
        }

        void Pop(){
            if (top == -1){
                printf("stack is empty!!!");
                return ;
            }
            top = top -1;
        }

        int Top(){
            return stack[top];
        }

        bool IsEmpty(){
            if(top == -1) return true;
            else return false;
        }

        void printStack(){

            printf("stack: ");
            for(int i=0;i<=top;i++){
                printf("%d ", stack[i]);
            }
            printf("\n");
        }
};

int main(){
    // Push(3);printStack();
    // Push(4);printStack();
    // Pop();printStack();
    // Push(5);printStack();
    // Push(6);printStack();
    // Push(7);printStack();
    // Pop();printStack();
    // printf("stack top is = %d", Top());
    // printStack();
    
    stack S; //Create S object
    S.Push(1);
    S.Push(2);
    S.printStack();


    return 0;
}
