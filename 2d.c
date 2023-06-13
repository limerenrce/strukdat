#include <stdio.h>

int main()
{
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int N = 2;
  int M = 3;
  int i, j;

  for (i = 0; i < N; i++)
  {
    for (j = 0; j < M; j++)
    {
      printf("%d ", arr[i][j]);
    }
  }
}
