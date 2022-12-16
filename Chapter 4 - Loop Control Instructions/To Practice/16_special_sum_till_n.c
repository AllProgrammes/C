// Program to find sum of series 1 + 2 + 2 + 3 + 3 + 3 + . . . + n
#include <stdio.h>
int main()
{
  int n, sum = 0;
  printf("Enter the value of n : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      sum = sum + i;
    }
  }
  printf("Sum = %d", sum);
  return 0;
}