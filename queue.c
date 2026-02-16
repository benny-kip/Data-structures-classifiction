#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = 0, rear = -1;

void enqueue(int value) {
    if(rear == MAX - 1) {
        printf("Queue Overflow\n");
    } else {
        queue[++rear] = value;
    }
}

void dequeue() {
    if(front > rear) {
        printf("Queue Underflow\n");
    } else {
        printf("Removed element: %d\n", queue[front++]);
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();

    return 0;
}
