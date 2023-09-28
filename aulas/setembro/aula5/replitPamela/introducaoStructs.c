//INTRODUÇÃO STRUCTS

#include <stdio.h>
#include <math.h>

//estrutura que define um ponto no plano cartesiano
typedef struct point 
{
    int x;
    int y;
} point;

int max_x = 100; //variaveis globais definindo 
int max_y = 100; // pontos maximos possiveis no plano

int main(void)
{

    point pt;
    point maxpt = {4, 3};
    double dist; //distancia euclidiana dos dois pontos

    printf("Digite as coordenadas do novo ponto: \n");
    scanf("%d %d", &pt.x, &pt.y);

    printf("Novo ponto igual a: x = %d, y = %d \n", pt.x, pt.y);

    dist = sqrt(pow((pt.x - maxpt.x), 2) + pow((pt.y - maxpt.y), 2));

    printf("Distancia euclidiana igual a %.3f \n", dist);

    return 0;
}
