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
    for (int j = 0; j < size_of_array; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }

  printf("Array = ");
  for (int i = 0; i < size_of_array; i++)
  {
    printf(" %d", arr[i]);
  }

  return 0;
}