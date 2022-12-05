#include <stdio.h>
int main()
{
  float temperature;
  printf("Enter today's temperature : ");
  scanf("%f", &temperature);
  if (temperature < 0)
  {
    printf("It's freezing weather !!");
  }
  else if (temperature >= 0 && temperature < 10)
  {
    printf("It's very cold weather !!");
  }
  else if (temperature >= 10 && temperature < 20)
  {
    printf("It's cold weather !!");
  }
  else if (temperature >= 20 && temperature < 30)
  {
    printf("It's normal weather !!");
  }
  else if (temperature >= 30 && temperature < 40)
  {
    printf("It's hot !!");
  }
  else
  {
    printf("It's very hot !!");
  }

  return 0;
}