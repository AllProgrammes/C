#include <stdio.h>
int main()
{
  printf("Odd numbers from 1 to 50 are as follows : ");
  for (int i = 1; i <= 50; i++)
  {
    if (i % 2 != 0)
    {
      printf(" %d ", i);
    }
  }
  return 0;
}