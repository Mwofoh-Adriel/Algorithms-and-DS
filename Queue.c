#include <stdio.h>
#define MAX_SIZE 100  // Define the maximum size of the queue

int queue[MAX_SIZE];  // Declare an array of integers to represent the queue
int front = -1, rear = -1;  // Initialize the front and rear of the queue to -1, indicating that the queue is empty

// Function to add an element to the end of the queue
void enqueue(int value) {
    if (rear == MAX_SIZE - 1) {  // Check if the queue is full
        printf("Queue is full. Cannot enqueue.\n");  // If so, print an error message
    } else {
        if (front == -1) {  // If the queue is empty
            front = 0;  // Set the front of the queue to 0
        }
        rear++;  // Increment the rear of the queue
        queue[rear] = value;  // Store the new element at the rear of the queue
    }
}

// Function to remove an element from the front of the queue
void dequeue() {
    if (front == -1 || front > rear) {  // Check if the queue is empty
        printf("Queue is empty. Cannot dequeue.\n");  // If so, print an error message
    } else {
        printf("Dequeued element: %d\n", queue[front]);  // Print the front element of the queue
        front++;  // Increment the front of the queue, effectively removing the front element
    }
}

// Function to display the elements of the queue
void display() {
    if (front == -1 || front > rear) {  // Check if the queue is empty
        printf("Queue is empty.\n");  // If so, print a message
    } else {
        printf("Queue elements: ");  // Print a message
        for (int i = front; i <= rear; i++) {  // Loop through the queue from front to rear
            printf("%d ", queue[i]);  // Print each element
        }
        printf("\n");  // Print a newline
    }
}

    //Main Function
int main() {
    enqueue(10);  // Add 10 to the queue
    enqueue(20);  // Add 20 to the queue
    enqueue(30);  // Add 30 to the queue
    enqueue(40); //  Add 40 to the queue
    display();  // Display the queue
    dequeue();  // Remove the front element from the queue
    dequeue();  // Remove the new front element from the queue
    display();  // Display the queue
    return 0;  
}
