#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
} node;

typedef struct queue{
    node *rear,*front;
}queue;

void initialie(queue *q){
    q -> front = NULL;
    q -> rear = NULL;
}

int isEmpty(queue *q){
   return (q -> front == NULL);
}

void enqueue(queue *q, int a){
    node *newnode = (node *)malloc(sizeof(node));
    if(!newnode){
        printf("Memory allocation failed.\n");
        return;
    }
    newnode -> data = a;
    newnode -> next = NULL;
    if(q -> rear == NULL){
        q -> front = q -> rear = newnode;
    }else{
        q -> rear -> next = newnode;
        q -> rear = newnode;
    }
}

int dequeue(queue *q){
    int del;
    node *res = q -> front;

    if(isEmpty(q)){
        printf("Queue is empty.\n");
        return -1;
    }

    del = res -> data;
    q -> front = q -> front -> next;
    if(q -> front == NULL){
        q -> rear = NULL;
    }
    free(res);
    return del;
}

void display(node *head){
    if(head == NULL){
        printf("Queue is empty.\n");
        return;
    }
    node *temp = head;
    printf("Queue element are : ");
    while(temp){
        printf("%d ", temp -> data);
        temp = temp ->next;
    }
    printf("\n");
}

int main(){
    queue q;

    initialie(&q);

    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);

    display(q.front);

    printf("Delete element is %d\n", dequeue(&q));
    display(q.front);

    return 0;
}