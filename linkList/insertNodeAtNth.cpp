//linked list:

#include<stdlib.h>
#include<stdio.h>

// 定義節點的結構體
struct Node
{
    int data;              
    struct Node* next;  //這個Node poiter 
};

struct Node* head;   //head address 

void Insert(int number, int position){

    Node *temp1  = (Node*)malloc(sizeof(struct Node)); // Node *temp1 = New Node();
    
    (*temp1).data = number; //temp1->date = number;
    (*temp1).next = NULL;    // temp1->next = NULL;


    if (position==1){
        (*temp1).next = head;
        head = temp1;
        return;
    }

    Node* temp2 = head;

    for (int i=0;i<position-2;i++){
        temp2=(*temp2).next;
    }
    
    temp1->next = temp2->next;
    temp2->next = temp1;


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
    head = NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);          
    
    //4,5,2,3

    Print(head);
}