#include<stdio.h>
#define MAX_SIZE 100
 
int stack[MAX_SIZE];
int top = -1;

int IsFull(){
 if(top == MAX_SIZE-1)
  return 1;
  else
  return 0; 
}

int IsEmpty(){
  if(top == -1)
  return 1;
  else
  return 0;
}

