// Program to find Sum of the series 1*3 + 3*5 + …
#include <stdio.h>
int main()
{
  int n, sum = 0, odd_number = 1;
  printf("Enter the value of n : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    sum = sum + (odd_number * (odd_number + 2));
    odd_number += 2;
  }
  printf("Sum according to this series is %d", sum);
  return 0;
}