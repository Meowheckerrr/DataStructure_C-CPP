

//If the head is not a global variable 


#include<stdlib.h>
#include<stdio.h>

struct Node{
    int data;              // data 
    struct  Node* next;    // pointer 
};


// we can pass the pointer to Node 

Node* Insert(int number, Node* head){
    //malloc() retrun a pointer to the starting address
    Node* temp =(Node*)malloc(sizeof(struct Node));

    //access the field of the Node 
    (*temp).data = number;  //temp->data=number
    (*temp).next = head;    //temp->next=head  

    head=temp;

    return head;

}

void Print(Node* head){

    //Point to Node 

    printf("list is :");


    //Traverse the link list 
        while(head != NULL){

            printf("%d ",head->data);   //show Number
            head=head->next;           //next Node

        }
        printf("\n");

}


int main(){

    struct  Node* head;

    head = NULL; //empty list

    printf("How many number ?\n");
    int n;
    scanf("%d",&n);

        int number;
        for(int i=0;i<n;i++){
            printf("Enter the number");
            scanf("%d",&number);
            head = Insert(number,head);   //insert function 
            Print(head);           // print linklist 
        }
}