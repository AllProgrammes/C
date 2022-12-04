#include <stdio.h>
int main()
{
  printf("Odd numbers from 1 to 50 are as follows : ");
  for (int i = 1; i < 50; i++) // range does not include the digit 50
  {
    if (i % 2 != 0)
    {
      printf(" %d ", i);
    }
  }
  return 0;
}