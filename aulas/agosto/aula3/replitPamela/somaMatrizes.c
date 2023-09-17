//SOMA MATRIZES

#include <stdio.h>

int main(void)
{

  int matrizA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int matrizB[3][3] = {{9, 8, 7}, {3, 2, 1}, {6, 5, 4}};
  int matrizC[3][3];

  for(int i = 0; i < 3; i++) //Soma elemento por elemento
  {
    for(int j = 0; j < 3; j++)
    {
      matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
    }
  }

  printf("---------------MATRIZ SOMA---------------\n");
  for(int i = 0; i < 3; i++)
  {
    printf("|\t");
    for(int j = 0; j < 3; j++)
    {
      printf("%d\t",matrizC[i][i]);
    }
    printf("|\n");
  }
  
  return 0;
}