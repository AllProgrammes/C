#include <stdio.h>

struct Distance
{
  int feet;
  float inch;
} d1, d2, result;

int main()
{
  // take first distance input
  printf("Enter 1st distance\n");
  printf("Enter feet: ");
  scanf("%d", &d1.feet);
  printf("Enter inch: ");
  scanf("%f", &d1.inch);

  // take second distance input
  printf("\nEnter 2nd distance\n");
  printf("Enter feet: ");
  scanf("%d", &d2.feet);
  printf("Enter inch: ");
  scanf("%f", &d2.inch);
  int choice;
  printf("\nEnter 1 to add\nEnter 2 to find differnce\nChoose what you want to do : ");
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    // adding distances
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    // convert inches to feet if greater than 12
    while (result.inch >= 12.0)
    {
      result.inch = result.inch - 12.0;
      ++result.feet;
    }
    printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
    break;
  case 2:
    if (d1.feet > d2.feet)
    {
      // substracting distances
      result.feet = d1.feet - d2.feet;
      result.inch = d1.inch - d2.inch;

      // convert inches to feet if greater than 12
      while (result.inch >= 12.0)
      {
        result.inch = result.inch - 12.0;
        ++result.feet;
      }
      printf("\nDifference of distances = %d\'-%.1f\"", result.feet, result.inch);
    }
    else
    {
      // substracting distances
      result.feet = d2.feet - d1.feet;
      result.inch = d2.inch - d1.inch;

      // convert inches to feet if greater than 12
      while (result.inch >= 12.0)
      {
        result.inch = result.inch - 12.0;
        ++result.feet;
      }
      printf("\nDifference of distances = %d\'-%.1f\"", result.feet, result.inch);
    }
    break;
  default:
    break;
  }

  return 0;
}