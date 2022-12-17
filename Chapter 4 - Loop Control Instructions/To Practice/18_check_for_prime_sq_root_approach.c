#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  int number;
  printf("Enter the number : ");
  scanf("%d", &number);
  double sq_root = sqrt(number); // using sq_root variable so that we dont have to use the function again and again
  if (number == 1 || number == 0)
  {
    printf("0 & 1 is neither Prime nor Composite.");
    exit(0);
  }
  else if (sq_root - (number / sq_root) == 0)
  {
    printf("Not Prime");
    exit(0);
  }
  else
  {
    int n = sq_root + 1; // doing preceding round off
    for (int i = 2; i < n; i++)
    {
      if (number % i == 0)
      {
        printf("Not Prime");
        exit(0);
      }
    }
  }
  printf("Prime");
  exit(0);

  return 0;
}