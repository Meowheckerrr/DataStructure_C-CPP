#include <iostream>
#define SIZE 10

int array[SIZE];
int front = -1;
int rear = -1;

bool isEmpty() {
    if (front == -1 && rear == -1) { // 队列为空
        std::cout << "Queue is empty!!!" << std::endl;
        return true;
    }
    else {
        return false;
    }
}

void enQueue(int value) {
    // 检查队列是否已满
    if (rear == SIZE - 1) {
        std::cout << "Queue is full!" << std::endl;
        return;
    }
    
    // case 1: 队列为空
    if (isEmpty()) {
        front = rear = 0; // 头尾指针都指向第一个索引
        array[rear] = value;
    }
    // case 2: 队列不为空
    else {
        rear = (rear + 1) % SIZE; // 循环数组
        array[rear] = value;
    }
}

void deQueue() {
    if (isEmpty()) {
        return;
    }
    // case 1: 出队后队列为空
    else if (front == rear) {
        // 标记出队后队列为空
        front = rear = -1;
    }
    else {
        front = (front + 1) % SIZE; // 头部指针加一
    }
}

int getFront() {
    return array[front];
}

int main() {
    // 测试队列操作
    enQueue(1);
    enQueue(2);
    enQueue(3);

    std::cout << "Front element: " << getFront() << std::endl;

    deQueue();
    std::cout << "Front element after dequeue: " << getFront() << std::endl;
    return 0;
}
