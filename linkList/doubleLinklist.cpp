#include<stdio.h>
#include<stdlib.h>


struct node {
    struct node* prev; //prveous node 
    int data;
    struct node* next; //next node 
};

// pointer to head node 

struct node* head;

//newNode (HEAP)

struct node* getNewNode(int NodeValue){

    //heap -> 不會隨 function invoke 結束而消失

    struct node* newNode = (struct node*)malloc(sizeof(struct node)); //create Node Address!! 

    (*newNode).data = NodeValue;
    (*newNode).prev = NULL;
    (*newNode).next = NULL;

    return newNode; //retrun address from the heap!!

}

void insertAtHead(int NodeValue){
    struct node* localNewNode = getNewNode(NodeValue);
    // insert frist node  if insertAtHead(2) (0/2/0)
    if(head == NULL){
        head = localNewNode;
        return;
    }
    // insert second node ....
    head->prev=localNewNode; 
    localNewNode->next=head; 
    head=localNewNode;
}

void printF(){
    struct node* temp = head;
    printf("forward:");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void printfReverse(){
    struct node* temp = head;
    //walk to the end 
    while(temp->next != NULL){
        temp=temp->next;
    }

    //print reverser
    printf("Reverse:");
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->prev;
    }
     printf("\n");
}

int main(){
    head =NULL;
    insertAtHead(3);printF();printfReverse();
    insertAtHead(4);printF();printfReverse();
    insertAtHead(5);printF();printfReverse();
    return 0;
}