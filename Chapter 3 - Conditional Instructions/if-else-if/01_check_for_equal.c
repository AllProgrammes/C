#include <stdio.h>
int main()
{
  float a, b;
  printf("Enter the value of variable a : ");
  scanf("%f", &a);
  printf("Enter the value of variable b : ");
  scanf("%f", &b);
  if (a == b)
  {
    printf("\nVariable a and b are equal !!");
  }
  else
  {
    printf("\nVariable a and b are not equal !!");
  }

  return 0;
}