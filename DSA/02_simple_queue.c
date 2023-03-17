#include <stdio.h>
int rear = -1;
int front = -1;

/* Introduction :-
  This is a simple queue in which we can push an element from the rear end and pop an element from the front end

  Problems with this format :-
  We cannot go backwards to store our elements like suppose if in a queue of 2 3 4 5 6 if we start poping elements from front then we can't use the space left as rear will be stuck at the end of the queue and it will show it is full*/

void push(int queue[], int element, int n);
void pop(int queue[], int n);
void display(int queue[]);

void display(int queue[])
{
  if ((front == -1) || (front == rear + 1))
  {
    printf("The queue is empty !!");
  }
  else
  {
    printf("Elements in the queue are as follows :-\n");
    for (int i = front; i <= rear; i++)
    {
      printf("%d\n", queue[i]);
    }
  }
}

// PUSH AT THE REAR
void push(int queue[], int element, int n)
{
  if (rear == (n - 1))
  {
    printf("\nOVERLOAD\n");
  }
  else
  {
    if (rear == -1 && front == -1)
    {
      front++;
      rear++;
      queue[rear] = element;
      printf("\nSuccessfully pushed %d at position %d in the queue\n", element, rear);
    }
    else
    {
      rear++;
      queue[rear] = element;
      printf("\nSuccessfully pushed %d at position %d in the queue\n", element, rear);
    }
  }
}

// POP AT THE FRONT
void pop(int queue[], int n)
{
  if ((front == -1) || (front == (rear + 1)))
  {
    printf("\nUNDERFLOW\n");
  }
  else
  {
    front++;
    printf("\nPoped the element at position %d\n", front);
  }
}
int main(void)
{
  int n;
  printf("Enter the size of the queue : ");
  scanf("%d", &n);
  int choice, queue[n];
  do
  {
    printf("\nEnter what you wanna do in this queue ?\n1. Push\n2. Pop\n3. Display\n4. Exit\t : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
      int temp;
      printf("Enter the element to be pushed : ");
      scanf("%d", &temp);
      push(queue, temp, n);
    }
    else if (choice == 2)
    {
      pop(queue, n);
    }
    else if (choice == 3)
    {
      display(queue);
    }

  } while (choice == 1 || choice == 2 || choice == 3);
}