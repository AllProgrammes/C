#include <stdio.h>
#include <stdlib.h>
int main()
{
  int number;
  printf("Enter the number : ");
  scanf("%d", &number);
  if (number >= 0)
  {
    if (number == 0)
    {
      printf("0 is neither negative nor positive");
      exit(0);
    }

    printf("%d is a positive number", number);
  }
  else
  {
    printf("%d is a negative number", number);
  }

  return 0;
}