#include <stdio.h>

int main() {

    int N; //matriz quadrada ([2][2], [3][3]...)

    while (1) 
    {
        scanf("%d", &N);

        if (N == 0) //colocar algo relacionado ao 15?
        {
            break;
        }
        
        int matriz[N][N]; //colocar aqui [15][15]?
        int T = 1;
        int valor = 1;

        int inicio = matriz[0][0] = 1;



        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                printf("%d", inicio);

                
            }
        }

           

        printf("\n"); // Imprime uma linha em branco após o array
    }


    return 0;
}
//beecrowd 1557