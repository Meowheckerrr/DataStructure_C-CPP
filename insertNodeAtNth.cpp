//linked list:

#include<stdlib.h>
#include<stdio.h>

// 定義節點的結構體
struct node
{
    int data;               // 存放資料的變數
    struct Node* next;      // 指向下一個節點的指標
};

struct Node* head;          // 定義一個指向節點的指標變數，表示這個串列的開頭

int main(){
    head = NULL;            // 初始化串列，把 head 設為 NULL 表示串列為空
}