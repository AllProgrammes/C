#include <stdio.h>
int main()
{
  printf("Numbers which are divisible by 9 in range of 1 to 50 are as follows : ");
  for (int i = 1; i < 50; i++) // range does not include the digit 50
  {
    if (i % 9 == 0)
    {
      printf(" %d ", i);
    }
  }
  return 0;
}