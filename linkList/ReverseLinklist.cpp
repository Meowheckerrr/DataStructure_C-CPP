#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node* next;
};

struct node* insertF(int data, struct node* head) {
    //allocate memory (node address)
    struct node* temp = (struct node*)malloc(sizeof(struct node));

    temp->data = data; //(node data)
    temp->next = head; //(node pointer)

    head = temp;
    return head;
}

void printF(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

//Recursive
struct node* reverseLinkList(struct node * head){
    
    if (head == NULL) return head;

    struct node* rest = reverseLinkList(head->next);
    //statement (function retrun 會執行以下statment)

    struct node* q = head->next;  
    head->next->next = head;
    head->next = NULL;

    // q->next = head; // 250(200->next) -> 200(head)
    // head->next = NULL; //(250) 改成0

    return rest;
}


int main() {
    struct node* head = NULL;

    head = insertF(3, head);
    head = insertF(4, head);
    head = insertF(5, head);
    head = insertF(6, head);

    printf("Original Link List: ");
    printF(head);

    printf("Reverse Link List: ");
    head = reverseLinkList(head);
    printF(head);

    return 0;
}
