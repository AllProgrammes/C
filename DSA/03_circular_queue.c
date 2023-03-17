#include <stdio.h>
int rear = -1;
int front = -1;

/* Introduction :-
  This is a circular queue which solves the problem of the previously discussed simple queue */

void push(int queue[], int element, int n);
void pop(int queue[], int n);
void display(int queue[], int n);

void display(int queue[], int n)
{
  if (front == -1)
  {
    printf("The queue is empty !!");
  }
  else if (front <= rear)
  {
    printf("Elements in the queue are as follows :-\n");
    for (int i = front; i <= rear; i++)
    {
      printf("%d\n", queue[i]);
    }
  }

  else
  {
    printf("Elements in the queue are as follows :-\n");
    for (int i = front; i <= (n - 1); i++)
    {
      printf("%d\n", queue[i]);
    }
    for (int i = 0; i <= rear; i++)
    {
      printf("%d\n", queue[i]);
    }
  }
}

// PUSH AT THE REAR
void push(int queue[], int element, int n)
{
  if (front == 0 && (rear == (n - 1)) || (front == rear + 1))
  {
    printf("\nOVERLOAD !! The queue is full\n");
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
      if (rear == (n - 1))
      {
        rear = -1;
      }
      rear++;
      queue[rear] = element;
      printf("\nSuccessfully pushed %d at position %d in the queue\n", element, rear);
    }
  }
}

// POP AT THE FRONT
void pop(int queue[], int n)
{
  if (((front == -1) && (rear == -1)))
  {
    printf("\nUNDERFLOW\n");
  }
  else
  {
    if (front == (n - 1))
    {
      front = -1;
    }
    else if (front == rear)
    {
      front = -1;
      rear = -1;
    }
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
      display(queue, n);
    }

  } while (choice == 1 || choice == 2 || choice == 3);
}