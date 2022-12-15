#include <stdio.h>
int sum_of_digits(int number);
int count(int);
int count(int num)
{
  int c = 0;
  while (num != 0)
  {
    c++;
    num = num / 10;
  }
  return c;
}
int sum_of_digits(int number)
{
  int sum = 0, digit = 0;
  if (count(number) == 1)
  {
    return number;
  }
  else
  {
    while (number != 0)
    {
      digit = number % 10;
      sum = sum + digit;
      number = number / 10;
    }
    sum_of_digits(sum);
  }
}
int main()
{
  int number;
  printf("Enter the number : ");
  scanf("%lld", &number);
  if (sum_of_digits(number) == 1)
  {
    printf("%d is a Magic number", number);
  }
  else
  {
    printf("%d is not a magic number", number);
  }
  return 0;
}