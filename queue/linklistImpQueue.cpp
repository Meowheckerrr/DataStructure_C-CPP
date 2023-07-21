#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node* next;
};


struct node* front = NULL;
struct node* rear = NULL;

void enQueue(int value){

    //create new node from heap
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
    (*temp).data=value;
    (*temp).next=NULL;

    //case 1 queue is empty 
    if (front == NULL && rear == NULL){
        front = rear = temp;
        return ;

    }

   
    rear->next = temp;  //rear link to new node 
    rear = temp ;       //update rear adrress


}


void deQueue(){
    struct node* temp = front;  // temp 用來記錄 要被free 掉的node Address 

    if(front == NULL) return;
    if(front == rear ){
        front = rear = NULL;
    }
    else {
        front = front->next;
    }

    free(temp);
}

void displayQueue() {
    struct node* current = front;

    if (current == NULL) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}



int main() {
    //Testing 
    enQueue(1);
    enQueue(2);
    enQueue(3);

    displayQueue(); // 预期输出: Queue: 1 2 3

    deQueue();

    displayQueue(); // 预期输出: Queue: 2 3

    return 0;
}



