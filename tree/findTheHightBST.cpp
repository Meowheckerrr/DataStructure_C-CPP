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

// Find Max

    //interation solution
    int findMax(struct bstNode* rootPtr){
        if(rootPtr == NULL){
            printf("tree is empty");
            return -1;
        }
        else {  
            struct bstNode* currentNode = rootPtr;     
            while (currentNode->right != NULL){ 
                currentNode = currentNode->right;
            }
            int maxElement = currentNode->data;
            return maxElement;
        }
    }

    // Fin  the min
    int findMin(struct bstNode* rootPtr){
        if(rootPtr == NULL){
            printf("tree is empty");
            return -1;
        }
        else {  
            struct bstNode* currentNode = rootPtr;     
            while (currentNode->left != NULL){ 
                currentNode = currentNode->left;
            }
            int minElement = currentNode->data;
            return minElement;
        }
    }

    //Resurive solution 
    int findMaxRecusive(struct bstNode *rootPtr){

        if(rootPtr == NULL){
            printf("tree is empty");
            return -1;
        }
        else{
            struct bstNode* currentNode = rootPtr;
            if(currentNode->right == NULL){
                return currentNode->data;
            }
            return findMaxRecusive(rootPtr->right);
        }

    }
    int findMinRecusive(struct bstNode *rootPtr){

        if(rootPtr == NULL){
            printf("tree is empty");
            return -1;
        }
        else{
            struct bstNode* currentNode = rootPtr;
            if(currentNode->left == NULL){
                return currentNode->data;
            }
            return findMinRecusive(rootPtr->left);
        }

    }

bool searchF(struct bstNode* rootPtr, int SearchValue){
    if (rootPtr == NULL) return false;
    else if (rootPtr->data == SearchValue) return true;

    //walk to child
    else if (SearchValue <= rootPtr->data) return searchF(rootPtr->left,SearchValue);
    else return searchF(rootPtr->right,SearchValue); 
}

int findHight(struct bstNode* rootPtr){
    if (rootPtr == NULL) return -1; //calculate the number of node -> return 0;
    return max(findHight(rootPtr->left),findHight(rootPtr->right))+1;
}


int main(){

    //to store addres of root node 
    struct bstNode* rootPtr;
    rootPtr = NULL;
    rootPtr = insertF(rootPtr,15);
    rootPtr = insertF(rootPtr,10);
    rootPtr = insertF(rootPtr,20);
    rootPtr = insertF(rootPtr,5);
    rootPtr = insertF(rootPtr,25);
    rootPtr = insertF(rootPtr,30);


    // int number;
    // printf("enterthe Number \n");
    // scanf("%d",&number);
    // if (searchF(rootPtr,number)== true) printf("found\n");
    // else printf("not found");
    
    //search the max element in BST
    // iteration solution 
    
    // printf("Max element is :%d\n",findMax(rootPtr));
    // printf("Min element is :%d\n",findMin(rootPtr));

    // // Recusive solution 
    // printf("Max element(R) is :%d\n",findMaxRecusive(rootPtr));
    // printf("Min element(R) is :%d\n",findMinRecusive(rootPtr));

    //Tree Hight
    printf("Tree Hight %d",findHight(rootPtr));
}


