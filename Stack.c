#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100  // Define the maximum size of the stack

int stack[MAX_SIZE];  // Declare an array of integers to represent the stack
int top = -1;  // Initialize the top of the stack to -1, indicating that the stack is empty

// Function to push an element onto the stack
void push(int x) {
    if (top == MAX_SIZE - 1) {  // Check if the stack is full
        printf("Stack overflow! Cannot push element.\n");  // If so, print an error message
    } else {
        top++;  // Increment the top of the stack
        stack[top] = x;  // Store the new element at the top of the stack
    }
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {  // Check if the stack is empty
        printf("Stack underflow! Cannot pop element.\n");  // If so, print an error message
        return -1;  // Return -1 to indicate an error
    } else {
        int poppedValue = stack[top];  // Store the top element of the stack
        top--;  // Decrement the top of the stack
        return poppedValue;  // Return the popped value
    }
}

// Function to peek at the top element of the sta
int peek(){
    if(top == -1){   // Check if the stack is empty
       printf("Stack is empty! Cannot peek.\n");  // If so, print an error message      
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
    push(20);

    printf("Popped value: %d\n", pop());
    printf("Popped value: %d\n", pop());
    printf("Popped value: %d\n", pop());
    printf("Popped value: %d\n", pop());
    printf("Popped value: %d\n", pop());

    return 0;
}
