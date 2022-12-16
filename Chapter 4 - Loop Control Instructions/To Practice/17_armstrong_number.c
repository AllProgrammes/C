#include <stdio.h>
int check_for_armstrong(int);
int check_for_armstrong(int number)
{
  int digit = 0, sum = 0, cpy_number = number;
  while (number != 0)
  {
    digit = number % 10;
    sum = sum + (digit * digit * digit);
    number = number / 10;
  }
  if (sum == cpy_number)
  {
    printf("%d is an armstrong number", cpy_number);
  }
  else
  {
    printf("%d is not an armstrong number", cpy_number);
  }
}
int main()
{
  int number;
  printf("Enter the number : ");
  scanf("%d", &number);
  check_for_armstrong(number);
  return 0;
}