#include <stdio.h>
int main()
{
  int row, column;
  printf("Enter the row and column of the first matrix : ");
  scanf("%d %d", &row, &column);
  int arr_1[row][column], arr_2[row][column];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      printf("Enter the value in [%d][%d] in matrix 1: ", i, j);
      scanf("%d", &arr_1[i][j]);
    }
  }
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      printf("Enter the value in [%d][%d] in matrix 2 : ", i, j);
      scanf("%d", &arr_2[i][j]);
    }
  }
  printf("\tSUM\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      printf("%d\t", arr_1[i][j] + arr_2[i][j]);
    }
    printf("\n");
  }
  printf("\tDIFFERENCE\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      printf("%d\t", arr_1[i][j] - arr_2[i][j]);
    }
    printf("\n");
  }
  return 0;
}