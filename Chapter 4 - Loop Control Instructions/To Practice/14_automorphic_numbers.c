// Automorphic numbers are the numbers whose square's last digits should match the number entered

// header files
#include <stdio.h>
#include <math.h>

// function initializations
int check_for_automorphic(int);
int digit_counter(int number);

// function declarations
int digit_counter(int number)
{
  int counter = 0;
  while (number != 0)
  {
    number = number / 10;
    counter++;
  }
  double result = pow(10, counter);
  return result;
}
int check_for_automorphic(int number)
{

  if ((number * number) % digit_counter(number) == number)
  {
    printf("%d is a automorphic number", number);
  }
  else
  {
    printf("%d is not a automorphic number", number);
  }
}
int main()
{
  int number;
  printf("Enter the number : ");
  scanf("%d", &number);
  check_for_automorphic(number);
  return 0;
}