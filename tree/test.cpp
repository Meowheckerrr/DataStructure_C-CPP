#include<iostream>

int test1F(int value,int height){
    if (value == 1)return -1;
    test1F(value+1,height);
    return height+1;
}
/*
int findHight(struct *node root){

    if(root == NULL){
        return -1
    }

    leftH=FindLeftH(root->left)
    rightH=FindRightH(root->rignt)

    return max(leftH,rightH)+1 

}

*/
int main(){

    printf("%d",test1F(0));
    return 0;
}


