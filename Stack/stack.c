#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct{
    int top;
    int arr[MAX];
}Stack;

void init(Stack *s){
    s -> top = -1;
}

int isEmpty(Stack *s){
    return (s -> top == -1) ? 1 : 0;
}

int isFull(Stack *s){
    return (s -> top == MAX -1) ? 1 : 0;
}

void push(Stack *s,int data){
    if(isFull(s))
        printf("\nStack is full.");
    s -> top = s -> top + 1;
    s -> arr[s -> top] = data;
}

int pop(Stack *s){
    int temp;
    if(isEmpty(s))
        printf("\nStack is Empty.");
    temp = s -> arr[s -> top];
    s -> top = s -> top - 1;
    printf("\nPopped : %d", temp);
        
    return temp;
}

void display(Stack *s){
    if(isEmpty(s)){
        printf("\nStack is empty.");
    }
    printf("\nThe content of stack are : ");
    for(int i = s -> top; i >= 0; i--){
        printf("%d ", s -> arr[i]);
    }
}

int main(){
    Stack s;
    int choice, data;
    
    init(&s);
    
    printf("\nEnter the 5 element to stack :\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &data);
        push(&s,data);
    }

    display(&s);
    pop(&s);
    pop(&s);
    display(&s);



    return 0;
}