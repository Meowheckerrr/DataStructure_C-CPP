#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head;

void insertF(int data){
    //allocate memory 
    node* temp = (node*)malloc(sizeof(struct node));
    
    (*temp).data = data;
    (*temp).next = head;

    head = temp;
};


void printF(){

    struct node* temp = head;

    while (temp != NULL){
        printf("%d",temp->data);
        temp=temp->next;

    };
    printf("\n");
    

}
void deleteF(int n){

    //delete n the 
    struct node *temp1 =head;


    // 處理node =1 situtaion 

    if (n==1){
        head = temp1->next;
        free(temp1);
        return;
    }

    //walk to n-2 position 
    for (int i =0;i<n-2;i++){
        temp1 = temp1->next; // walk to n-1 node position
    }

    struct node *temp2 ;  //temp 要掉過的node
    temp2 = temp1->next;  
    temp1->next = temp2->next;
    free(temp2);


}

int main(){

    insertF(3);
    insertF(4);
    insertF(5);
    insertF(6);
    printF();

    int n;
    printf("Delete N th position !!");

    scanf("%d",&n);
    deleteF(n);
    printF();


    return 0;
}



