#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next; 
};

// in forward 

void printF(struct node *current )
{

    if(current == NULL) return ;
    printf("%d ", current->data);
    printF(current->next);  // hop next node 
    
};

//Reverse
void printFR(struct node *current )
{
    if(current == NULL) return ; //exit condictions 
    printF(current->next);  // recursive call  
    printf("%d ", current->data);
    
};



struct node* insertF(struct node* head, int data){

    // create node (allocate memory address!!)

    struct node* temp = (struct node*)malloc(sizeof(struct node));
    
    //insert value 
    temp->data= data;
    temp->next= NULL;

    //assign the pointer of node 
        //if list is empty
        if (head == NULL) return temp;
        // it will find the last node and assign the pointer of node 
        else {
            struct node* temp1 = head;
            while (temp1->next != NULL) temp1 = temp1->next;
            temp1->next = temp;

        }
        return head;  
}

int main(){

    struct node* head  = NULL;
    head = insertF(head,2);
    head = insertF(head,3);
    head = insertF(head,4);
    head = insertF(head,5);
    // printF(head);
    // printf("\n");
    printFR(head);

    return 0;
}