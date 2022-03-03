#include <stdio.h>
#define ROWS 3
#define COLS 3

int binSearchOn2dMatrix(int matrix[][COLS], int key)
{
  int start = 0;
  int mid, row, col, value;
  int end = ROWS * COLS - 1;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    row = mid / COLS;
    col = mid % COLS;
    value = matrix[row][col];

    if (value == key)
      return 1;
    if (value > key)
      end = mid - 1;
    else
      start = mid + 1;
  }
  return 0;
}
int main()
{
  int matrix[ROWS][COLS];
  int key;
  int i, j;
  int searchStatus;

  printf("Enter %d x %d matrix in ascending order: ", ROWS, COLS);
  for (i = 0; i < ROWS; i++)
    for (j = 0; j < COLS; j++)
      scanf("%d", &matrix[i][j]);

  printf("\nEnter search key: ");
  scanf("%d", &key);

  searchStatus = binSearchOn2dMatrix(matrix, key);
  printf("Key %d is found: %d\n", key, searchStatus);
  return 0;
}
