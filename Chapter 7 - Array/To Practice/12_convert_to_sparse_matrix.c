#include <stdio.h>
int main()
{
  // taking the number of rows
  int row;
  printf("Enter the number of rows : ");
  scanf("%d", &row);

  // taking the index elements
  int triplet_matrix[row][3];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("Enter the value in index[%d][%d] : ", i, j);
      scanf("%d", &triplet_matrix[i][j]);
    }
  }

  // making a sparse matrix form the details we got from triangular table
  int new_row = triplet_matrix[row - 1][0], new_col = triplet_matrix[row - 1][1], non_zero_elements = triplet_matrix[row - 1][2];
  int sparse_matrix[new_row][new_col];

  // assigning zero at each index
  for (int i = 0; i < new_row; i++)
  {
    for (int j = 0; j < new_col; j++)
    {
      sparse_matrix[i][j] = 0;
    }
  }

  // filling the non-zero elements
  for (int i = 0; i < new_row; i++)
  {
    int j = 0;
    sparse_matrix[triplet_matrix[i][j]][triplet_matrix[i][j + 1]] = triplet_matrix[i][j + 2];
  }

  // printing the sparse matrix
  for (int i = 0; i < new_row; i++)
  {
    for (int j = 0; j < new_col; j++)
    {
      printf("%d\t", sparse_matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}