#include <stdio.h>
int fibb(); // GLOBAL DECLARATION

// MAIN FUNCTION
int main()
{
  int n;
  printf("Enter the value of n : ");
  scanf("%d", &n);
  printf("The value as per fibonacci series at %dth position is : %d ", n, fibb(n));
  return 0;
}

// FIBONACCI SERIES
int fibb(int n)
{
  if (n == 1 || n == 0)
  {
    return 0;
  }
  else if (n == 2)
  {
    return 1;
  }

  else
  {
    return (fibb(n - 1) + fibb(n - 2));
  }
}