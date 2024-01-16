#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int x) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow! Cannot push element.\n");
    } else {
        top++;
        stack[top] = x;
    }
}

int pop() {
    if (top == -1) {
        printf("Stack underflow! Cannot pop element.\n");
        return -1;
    } else {
        int poppedValue = stack[top];
        top--;
        return poppedValue;
    }
}

int peek(){
    if(top == -1){
       printf("Stack is empty! Cannot peek.\n");        
      return -77777;
       stack[top];  
    } else {
        return stack[top];
    }
}

void display(){
    int i;
    for(i = top; i >= 0; i--){
        printf("%d\n",stack[i]);
    }
}

int main() {
    push(5);
    push(10);
    push(15);

    printf("Popped value: %d\n", pop());
    printf("Popped value: %d\n", pop());
    printf("Popped value: %d\n", pop());
    printf("Popped value: %d\n", pop());

    return 0;
}
  