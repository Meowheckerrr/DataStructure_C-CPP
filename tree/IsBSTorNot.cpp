#include<iostream>
#include<queue>
using namespace std;

struct  btNode
{
    int data;
    struct btNode* left ;
    struct btNode* right;
};


struct btNode* createNewNode(int data){
    struct btNode* newNodePtr = new btNode();//return create new node arddess from the Heap
    newNodePtr->data=data;
    newNodePtr->left = newNodePtr->right = NULL;
    return newNodePtr;
}

struct btNode* insertF(struct btNode* rootPtr, int data){
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
    int findMax(struct btNode* rootPtr){
        if(rootPtr == NULL){
            printf("tree is empty");
            return -1;
        }
        else {  
            struct btNode* currentNode = rootPtr;     
            while (currentNode->right != NULL){ 
                currentNode = currentNode->right;
            }
            int maxElement = currentNode->data;
            return maxElement;
        }
    }

    // Fin  the min
    int findMin(struct btNode* rootPtr){
        if(rootPtr == NULL){
            printf("tree is empty");
            return -1;
        }
        else {  
            struct btNode* currentNode = rootPtr;     
            while (currentNode->left != NULL){ 
                currentNode = currentNode->left;
            }
            int minElement = currentNode->data;
            return minElement;
        }
    }

    //Resurive solution 
    int findMaxRecusive(struct btNode *rootPtr){

        if(rootPtr == NULL){
            printf("tree is empty");
            return -1;
        }
        else{
            struct btNode* currentNode = rootPtr;
            if(currentNode->right == NULL){
                return currentNode->data;
            }
            return findMaxRecusive(rootPtr->right);
        }

    }
    int findMinRecusive(struct btNode *rootPtr){

        if(rootPtr == NULL){
            printf("tree is empty");
            return -1;
        }
        else{
            struct btNode* currentNode = rootPtr;
            if(currentNode->left == NULL){
                return currentNode->data;
            }
            return findMinRecusive(rootPtr->left);
        }

    }

bool searchF(struct btNode* rootPtr, int SearchValue){
    if (rootPtr == NULL) return false;
    else if (rootPtr->data == SearchValue) return true;

    //walk to child
    else if (SearchValue <= rootPtr->data) return searchF(rootPtr->left,SearchValue);
    else return searchF(rootPtr->right,SearchValue); 
}

int findHight(struct btNode* rootPtr){
    if (rootPtr == NULL) return -1; //calculate the number of node -> return 0;
    return max(findHight(rootPtr->left),findHight(rootPtr->right))+1;
}

void breadthFristTraversal(struct btNode* rootPtr){

    // if tree is empty
    if (rootPtr == NULL) return;

    //we have to include the standerLib queue to implement the BSF in BST
    queue<btNode*> Q; // create the Q object (pointer)

    Q.push(rootPtr);
    while(!Q.empty()){
        struct btNode* currentNode;
        currentNode = Q.front();
        printf("%d, ",currentNode->data);
        if(currentNode->left != NULL) Q.push(currentNode->left);
        if(currentNode->right != NULL) Q.push(currentNode->right);
        Q.pop();
    }
}

//Traversal 

void preorder(struct btNode* rootPtr){
    //if tree is empty 
    if (rootPtr == NULL) return;
    
    printf("%d,", rootPtr->data);    //visit root
    preorder(rootPtr->left);        //visit left Node
    preorder(rootPtr->right);        //visit right Node
}

void inorder(struct btNode* rootPtr){
       //if tree is empty 
    if (rootPtr == NULL) return;
    
    preorder(rootPtr->left);        //visit left Node
    printf("%d,", rootPtr->data);   //visit root
    preorder(rootPtr->right);        //visit right Node
}

void postOrder(struct btNode* rootPtr){
       //if tree is empty 
    if (rootPtr == NULL) return;

    preorder(rootPtr->left);        //visit left Node
    preorder(rootPtr->right);        //visit right NodeW
    printf("%d,", rootPtr->data);    //visit root
}

// way 1 checke if isBSt
    bool leftSubTreeLess(struct btNode* rootPtr,int value){

        if (rootPtr->data < value 
            &&leftSubTreeLess(rootPtr->left,value) // like find max,min function 
            &&leftSubTreeLess(rootPtr->right,value)
        )return true;
        else return false; 

    }
    bool rightSubTreeGreater(struct btNode* rootPtr, int value){
        if (rootPtr->data > value 
            &&rightSubTreeGreater(rootPtr->left,value) // like find max,min function 
            &&rightSubTreeGreater(rootPtr->right,value)
        )return true;
        else return false;

    }


    bool IsBinarySearchTreeW1(struct btNode* rootPtr){

        if(rootPtr == NULL)return true; // empty tree Case

        if(leftSubTreeLess(rootPtr->left,rootPtr->data)
            &&rightSubTreeGreater(rootPtr->right,rootPtr->data)
            &&IsBinarySearchTreeW1(rootPtr->left)    //check left-tree (Using recursive to check!)
            &&IsBinarySearchTreeW1(rootPtr->right)   //check right-tree
        )return true;
        else return false;
    }

// way 2 checke if isBSt

bool IsBstUnite(struct btNode* rootPtr, int minLimitValue, int maxLimitValue){
    if(
        rootPtr->data < minLimitValue&&
        rootPtr->data > maxLimitValue&&
        IsBstUnite(rootPtr->left,minLimitValue,rootPtr->data )&&
        IsBstUnite(rootPtr->right,rootPtr->data, maxLimitValue)
    )return true;
    else return false; 

}

bool IsBinarySearchTreeW2(struct btNode* rootPtr){
    IsBstUnite(rootPtr,INT_MIN,INT_MAX);
}



int main(){

    //to store addres of root node 

    struct btNode* rootPtr;

    rootPtr = NULL;
    rootPtr = insertF(rootPtr,15);
    rootPtr = insertF(rootPtr,10);
    rootPtr = insertF(rootPtr,20);
    rootPtr = insertF(rootPtr,5);
    rootPtr = insertF(rootPtr,25);
    rootPtr = insertF(rootPtr,30);

}


