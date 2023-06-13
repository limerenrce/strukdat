#include <stdio.h>

int main()
{
  int T[2][2][3] = {
      {{1, 2, 3}, {4, 5, 6}},
      {{7, 8, 9}, {10, 11, 12}}};
  int i, j, k;
  int N, M, O;

  N = 2;
  M = 2;
  O = 3;

  for (i = 0; i < N; i++)
  {
    for (j = 0; j < M; j++)
    {
      for (k = 0; k < O; k++)
      {
        printf("%d ", T[i][j][k]);
      }
      printf(" ");
    }
    printf("\n");
  }
}