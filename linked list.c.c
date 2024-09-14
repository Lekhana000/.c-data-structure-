#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
struct Node{
int data;
struct Node*next;
};
struct Node*createNode(int data){
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  if (!newNode){
    printf("memory allocatin error\n");
    return NULL;
  }
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}
void push(struct Node** top, int data){
  struct Node* newNode= createNode(data);
  if(!newNode){
    return;
  }

  
  *top = newNode;
  printf("%d pushed onto the stack\n", data);
}
int pop(struct Node** top){
  if (*top == NULL) {
    printf("stack is empty\n");
    return INT_MIN;
  }
  struct Node* temp = top;
  int poppedValue = temp->data;
  *top = (*top)->next;
  free(temp);
}
int peek(struct Node* top){
  if (top == NULL) {
    printf("stack is empty\n");
    return INT_MIN;
  }
  return top->data;
}
int beginning(struct Node* top){
  if (top == NULL){
    printf("stack is empty\n");
    return INT_MIN;
  }
  struct Node* current = top;
  while (current->next!= NULL){
    current = current->next;
  }
  return current->data;
}
int main(){
  struct Node*top = NULL;

  push(&top,10);
  push(&top,20);
  push(&top,30);
  push(&top,40);
  push(&top,50);
  printf("top element is %d\n",peek(top));
  printf ("bottom element is %d\n",pop(&top));
  printf("popped element is %d\n",peek(top));
  printf("popped element is %d\n",peek(top));
  printf("top element after popping is %d\n",peek(top));
  return 0;
}
  

