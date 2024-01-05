#include<stdio.h>
#define MAX_SIZE 100 // Maximum size of stack

int stack[MAX_SIZE]; // Stack array to hold stack elements
int top = -1;  // initially stack is empty

int IsFull(){
 if(top == MAX_SIZE-1)
  return 1;
  else
  return 1; 
}
        
int IsEmpty(){
  if(top == -1)
  return 1; 
  else
  return 0;
}

