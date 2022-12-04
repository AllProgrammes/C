#include <stdio.h>
int main()
{
  for (int i = 2; i <= 9; i++) // between does not include first and last digit so this loop will skip 2 x 1 and 2 x 10
  {
    printf("2 x %d = %d\n", i, 2 * i);
  }

  return 0;
}