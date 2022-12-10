#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
  clock_t start_time = clock(), end_time; // Taking start clock time

  // Defining variables
  double total_time;
  int number;

  // Taking input
  printf("Enter the number : ");
  scanf("%d", &number);

  for (int i = 2; i <= (number / 2); i++)
  {
    if (number % i == 0)
    {
      if (number < 2)
      {
        if (number == 1 || number == 0)
        {
          printf("0 & 1 is neither Prime nor Composite.");
          exit(0);
        }
        else
        {
          printf("Prime numbers are always positive.");
          exit(0);
        }
      }
      printf("Not Prime !!");

      // Processing Time
      end_time = clock();
      total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
      printf("\nTime taken by the CPU -> %lf seconds", total_time);
      exit(0);
    }
  }
  printf("Prime !!");
  // Processing Time
  end_time = clock();
  total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
  printf("\nTime taken by the CPU -> %lf seconds", total_time);
}