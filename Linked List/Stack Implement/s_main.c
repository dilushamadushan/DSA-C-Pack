#include <stdio.h>
#include <stdlib.h>
 
typedef struct Node{
    char data;
    struct Node *next;
}Node;

typedef struct{
    Node *top;
}stack;

void initialize(stack *s){
    s -> top = NULL;
}

int isEmpty(stack *s){
    return s -> top == NULL;
}

void push(stack *s,char value){
    Node *tmp = (Node *)malloc(sizeof(Node));
    if(!tmp){
        printf("Memory allocation Faild.\n");
        return;
    }
    tmp -> data = value;
    tmp -> next = s -> top;
    s -> top = tmp;
}

int pop(stack *s){
    if(isEmpty(s)){
        printf("Stack is empty.\n");
        return '\0';
    }
    Node *tmp = s -> top;
    char n = tmp -> data;
    s -> top = s -> top -> next;
    free(tmp);
    return n;
}

void display(stack *s){
    if(isEmpty(s)){
        printf("Stack is full.\n");
        return;
    }
    Node *tmp = s -> top;
    while(tmp){
        printf("%c ", tmp -> data);
        tmp = tmp -> next;
    } 
    printf("\n");
}

void reverse(stack *s){
    if(isEmpty(s) || s-> top ->next == NULL){
        return;
    } 
    stack temp;
    initialize(&temp);

    while(!isEmpty(s)){
        push(&temp,pop(s));
    }

    s -> top = temp.top; 
}

int main(){
    stack s;

    initialize(&s);

    push(&s,'A');
    push(&s,'B');
    push(&s,'C');
    push(&s,'D');

    printf("Eelement are : ");
    display(&s);

    printf("Deleted element is %c\n", pop(&s));

    printf("Elements after pop: ");
    display(&s);

    reverse(&s);
    
    printf("Elements after reverse: ");
    display(&s);

    return 0;
}