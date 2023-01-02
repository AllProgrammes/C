#include <stdio.h>
int main()
{
  int size_of_array;
  printf("Enter the size of array : ");
  scanf("%d", &size_of_array);
  int arr[size_of_array];
  for (int i = 0; i < size_of_array; i++)
  {
    printf("Enter the value in array %d : ", i);
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < size_of_array; i++)
  {
    if (arr[i] % 2 != 0)
    {
      arr[i] = 1; // ODD
    }
    else
    {
      arr[i] = 0; // EVEN
    }
  }
  printf("After checking :- \n");
  for (int i = 0; i < size_of_array; i++)
  {
    printf(" %d", arr[i]);
  }

  return 0;
}