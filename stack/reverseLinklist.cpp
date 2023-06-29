#include<stdio.h>
#include<stdlib.h>
#include<stack>
using namespace std;


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


struct node* ReverseLinklistUsingStack(struct node* head){
    stack<struct node *> S;
    node *temp = head;

    //to push all references 
    while(temp != NULL){
        S.push(temp);
        temp=temp->next;
    }

    // seting head porint 
    temp = S.top();
    head = temp;  //temp = 300
    S.pop();

    // Reverse link arrow

    while(!S.empty()){ //empty == Isempty?
        temp->next = S.top(); //S.top = 250 
        S.pop();
        temp=temp->next;//走道250(next Node) ,S.top 250 會被pop掉 -> 200

    }
    temp->next = NULL;
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
    head=ReverseLinklistUsingStack(head);
    printF(head);
   

    return 0;
}
