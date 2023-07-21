#include<iostream>
using namespace std;

struct  bstNode
{
    int data;
    struct bstNode* left ;
    struct bstNode* right;
};


struct bstNode* createNewNode(int data){
    struct bstNode* newNodePtr = new bstNode();//return create new node arddess from the Heap
    newNodePtr->data=data;
    newNodePtr->left = newNodePtr->right = NULL;
    return newNodePtr;
}

struct bstNode* insertF(struct bstNode* rootPtr, int data){
    if (rootPtr == NULL){
        rootPtr = createNewNode(data);
        return rootPtr;
    }
    else if (data <= rootPtr->data){
        rootPtr->left = insertF(rootPtr->left,data); //rootPtr(200)->left = NULL  create Node 
    }
    else {
        rootPtr->right = insertF(rootPtr->right,data);
    }
    return rootPtr;
}


// pointer to pointer -> void 

// void insertF(struct bstNode** rootPtr, int data){
//     if (*rootPtr == NULL){
//         *rootPtr = createNewNode(data);
//     }
// };

// int main(){

//     //to store addres of root node 
//     struct bstNode* rootPtr = NULL;
//     insertF(&rootPtr,1);
//     insertF(&rootPtr,2);
//     insertF(&rootPtr,3);

   
// }

bool searchF(struct bstNode* rootPtr, int SearchValue){
    if (rootPtr == NULL) return false;
    else if (rootPtr->data == SearchValue) return true;

    //walk to child
    else if (SearchValue <= rootPtr->data) return searchF(rootPtr->left,SearchValue);
    else return searchF(rootPtr->right,SearchValue); 
}

int main(){

    //to store addres of root node 
    struct bstNode* rootPtr;
    rootPtr = NULL;
    rootPtr = insertF(rootPtr,15);
    rootPtr = insertF(rootPtr,10);
    rootPtr = insertF(rootPtr,20);

    int number;
    printf("enterthe Number \n");
    scanf("%d",&number);
    if (searchF(rootPtr,number)== true) printf("found\n");
    else printf("not found");
   
}


