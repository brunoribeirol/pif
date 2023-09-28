//STRUCT ANINHADA (NESTED)

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} point;

//struct aninhada
typedef struct
{ 
    point p1;
    point p2;
} rect;

int max_x = 100; //variaveis globais definindo 
int max_y = 100; // pontos maximos possiveis no plano

int main(void)
{

    point pt;
    point maxpt = {4,3};
    rect screen;
    int altura, base, area;
    double dist; //distancia euclidiana dos dois pontos 

    printf("Digite as coordenadas do novo ponto: \n");
    scanf("%d %d", &pt.x, &pt.y);

    screen.p1 = maxpt;
    screen.p2 = pt; //passando os pontos definidos na estrutura retangulo

    printf("Novo ponto igual a: x = %d, y = %d \n", pt.x, pt.y);

    dist = sqrt((double)(pt.x - maxpt.x) * (pt.x - maxpt.x) + (double)(pt.y - maxpt.y) * (pt.y - maxpt.y));

    printf("Distancia eunclidiana igual a %.3f \n", dist);

    altura = abs(pt.y - maxpt.y); //abs é o valor absoluto (sempre positivo)
    base = abs(pt.x - maxpt.x);

    printf("Area do retangulo construido = %d\n", altura * base);


    return 0;
}