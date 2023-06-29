#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* insertF(int data, struct node* head) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
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

struct node* reverseLinkList(struct node* curr, struct node* prev) {
    if (curr == NULL)
        return prev;

    struct node* next = curr->next;
    curr->next = prev;
    return reverseLinkList(next, curr);
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
    head = reverseLinkList(head, NULL);
    printF(head);

    return 0;
}
