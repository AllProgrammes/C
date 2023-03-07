#include <stdio.h>
int top = -1;
void push(int stack[], int size_of_stack, int element);
void display(int stack[]);
void pop(int stack[]);

void push(int stack[], int size_of_stack, int element) // pushes an element into the stack
{
  if (top == size_of_stack - 1)
  {
    printf("Overload !!\n");
  }
  else
  {
    stack[top + 1] = element;
    top++;
    printf("Pushed element %d successfully at index [%d]\n", element, top);
  }
}
void pop(int stack[]) // deletes the top element
{
  if (top < 0)
  {
    printf("\nUnderflow");
  }
  else
  {
    printf("Successfully deleted an element at the index [%d]\n", top);
    stack[top] = 0;
    top--;
  }
}
void display(int stack[]) // displays the elements that are left inside the stack
{
  if (top == -1)
  {
    printf("No elements to display !!");
  }
  else
  {
    printf("\nElements inside the stack are :\n");
    for (int i = 0; i <= top; i++)
    {
      printf("%d\n", stack[i]);
    }
  }
}
int main()
{
  int n;
  printf("Enter the size of the stack : ");
  scanf("%d", &n);
  int stack[n], choice;
  do
  {
    printf("\nEnter what you wanna do in this stack ?\n1. Push\n2. Pop\n3. Display\n4. Exit\t : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
      int temp;
      printf("Enter the element to be pushed : ");
      scanf("%d", &temp);
      push(stack, n, temp);
    }
    else if (choice == 2)
    {
      pop(stack);
    }
    else if (choice == 3)
    {
      display(stack);
    }

  } while (choice == 1 || choice == 2 || choice == 3);
  return 0;
}