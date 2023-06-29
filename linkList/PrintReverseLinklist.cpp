#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

//struct node* head;

// struct node* insertF(int data, struct node* head){
//     //allocate memory 
//     struct node* temp = (struct node*)malloc(sizeof(struct node));
    
//     // (*temp).data = data;
//     // (*temp).next = head;

//     temp->data = data;
//     temp->next = head;

//     head = temp;
//     return head;
// };

struct node* insertF(int data, struct node* head) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    head = temp;
    return head;
}

void printF(struct node* head){

    struct node* temp = head;

    while (temp != NULL){
        printf("%d ",temp->data);
        temp=temp->next;

    }
    printf("\n");
    

}
// void deleteF(int n,struct node* head){

//     //delete n the 
//     struct node *temp1 =head;


//     // 處理node =1 situtaion 

//     if (n==1){
//         head = temp1->next;
//         free(temp1);
//         return;
//     }

//     //walk to n-2 position 
//     for (int i =0;i<n-2;i++){
//         temp1 = temp1->next; // walk to n-1 node position
//     }

//     struct node *temp2 ;  //temp 要掉過的node
//     temp2 = temp1->next;  
//     temp1->next = temp2->next;
//     free(temp2);


// }


// void reverseLinkList(){

//     struct node *privious,*current,*next;
//     current = head;
//     privious = NULL;

//     //walk
//     while(current != NULL){

//         next = current->next; //record 下一個hop 
//         current->next = privious; //reverse pointer 方向
//         privious=current; //留給下個node 交換用
//         current= next;// move to the next node 

//     }
//     head = privious; //update head pointer 

// }


struct node* reverseLinkList(struct node *head){
    struct node *privious,*current,*next;
    privious = NULL;
    current = head;
    next = NULL;

    //walk
    while(current != NULL){

        next = current->next; //record 下一個hop 
        current->next = privious; //reverse pointer 方向
        privious=current; //留給下個node 交換用
        current= next;// move to the next node 

    }
    head = privious; //update head pointer 
    return head;
}


int main(){
    struct node* head = NULL;

    head = insertF(3,head);
    head = insertF(4,head);
    head = insertF(5,head);
    head = insertF(6,head);
    printF(head);

    // Reverse
    printf("Reverse Link List \n");
    head=reverseLinkList(head);
    printF(head);



    return 0;
}



