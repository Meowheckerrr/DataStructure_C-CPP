#include <stdio.h>
#include <stdlib.h>

struct node {
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

struct node* reverseLinkList(struct node* head) {
    struct node* previous = NULL;
    struct node* current = head;
    struct node* next = NULL;

    while (current != NULL) {
        next = current->next; //record 下一個hop 
        current->next = previous; //reverse pointer 方向
        previous=current; //留給下個node 交換用
        current= next;// move to the next node 
    }

    head = previous;
    return head;
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
