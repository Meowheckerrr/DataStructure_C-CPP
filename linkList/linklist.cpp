#include<stdlib.h>
#include<stdio.h>

struct Node{
    int data;              // data 
    struct  Node* next;    // pointer 
};

//global variable 
struct  Node* head;

void Insert(int number){
    //malloc() retrun a pointer to the starting address
    Node* temp =(Node*)malloc(sizeof(struct Node));

    //access the field of the Node 
    (*temp).data = number;  //temp->data=number
    (*temp).next = head;    //temp->next=head  

    head=temp; // return address(被分配) 

}

void Print(){

    //Point to Node 

    struct Node* temp = head;
    printf("list is :");


    //Traverse the link list 
        while(temp != NULL){

            printf("%d ",temp->data);   //show Number
            temp=temp->next;           //next Node

        }
        printf("\n");

}


int main(){

    head = NULL; //empty list

    printf("How many number ?\n");
    int n;
    scanf("%d",&n);

        int number;
        for(int i=0;i<n;i++){
            printf("Enter the number");
            scanf("%d",&number);
            Insert(number);   //insert function 
            Print();           // print linklist 
        }
}