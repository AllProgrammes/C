#include <stdio.h>
int check_for_prime(int number);
int reverse_the_numbers(int number);

int main()
{
  int number;
  printf("Enter the number : ");
  scanf("%d", &number);
  if (check_for_prime(number) == 1)
  {
    if (check_for_prime(reverse_the_numbers(number)) == 1)
    {
      printf("\n%d is a twisted prime number !", number);
    }
    else
    {
      printf("\n%d is not a twisted prime number !", number);
    }
  }
  else
  {
    printf("\n%d is not a prime number !");
  }

  return 0;
}

int reverse_the_numbers(int number)
{
  int reversed = 0, digit = 0;
  while (number != 0)
  {
    digit = number % 10;
    reversed = reversed * 10 + digit;
    number = number / 10;
  }
  return reversed;
}
int check_for_prime(int number)
{
  int count = 0;
  for (int i = 1; i <= number; i++)
  {
    if (number % i == 0)
    {
      count++;
    }
  }
  if (count > 2)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}