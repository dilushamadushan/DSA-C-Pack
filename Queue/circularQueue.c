#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

int isEmpty(Queue *q) {
    return (q->front == -1);
}

int isFull(Queue *q) {
    return ((q->rear + 1) % MAX_SIZE == q->front);
}

void enqueue(Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue Overflow: Cannot enqueue %d\n", value);
        return;
    }

    if (isEmpty(q)) {
        q->front = q->rear = 0;
    } else {
        q->rear = (q->rear + 1) % MAX_SIZE;
    }

    q->items[q->rear] = value;
    printf("Enqueued: %d\n", value);
}

int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow: Cannot dequeue\n");
        return -1;
    }

    int value = q->items[q->front];
    if (q->front == q->rear) {
                q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX_SIZE;
    }

    printf("Dequeued: %d\n", value);
    return value;
}

int peek(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Nothing to peek.\n");
        return -1;
    }

    return q->items[q->front];
}

void displayQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue contents: ");
    int i = q->front;
    while (1) {
        printf("%d ", q->items[i]);
        if (i == q->rear)
            break;
        i = (i + 1) % MAX_SIZE;
    }
    printf("\n");
}

int main() {
    Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50); 
    
    displayQueue(&q);

    dequeue(&q);
    dequeue(&q);

    displayQueue(&q);

    enqueue(&q, 60);
    enqueue(&q, 70); 

    displayQueue(&q);

    printf("Front of the queue: %d\n", peek(&q));

    return 0;
}
