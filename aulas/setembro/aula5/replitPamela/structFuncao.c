//STRUCT FUNÇÃO

#include <stdio.h>
#include <stdlib.h>

//definindo um ponto
struct point
{
    int x;
    int y;
};

//definindo um retangulo
struct rect 
{
    struct point pt1;
    struct point pt2;
};

//funcao para criar um novo ponto
struct point makepoint(int x, int y)
{ 
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

//funcao para criar um novo retangulo
struct rect makescreen(struct point p1, struct point p2)
{ 
    struct rect temp;
    temp.pt1 = p1;
    temp.pt2 = p2;
    return temp;
}

//area do retangulo
int area_rect(struct rect retangulo)
{
    int altura,base;
    altura = abs(retangulo.pt1.y - retangulo.pt2.y);
    base = abs(retangulo.pt1.x - retangulo.pt2.x);

    return altura*base;
}

int main(void)
{

  int a, b, area; 
  struct point pt_1, pt_2;
  //struct point *pp; //ponteiro do tipo struct
  struct rect retangulo;

  printf("Digite as coordenadas do primeiro ponto\n");
  scanf("%d %d", &a, &b);
  pt_1 = makepoint(a, b);

  printf("As coordenadas do seu novo ponto sao (%d,%d)\n",pt_1.x, pt_1.y);

  //pp= &pt;
  //printf("As coordenadas do seu novo ponteiro sao (%d,%d)\n", pp->x, pp->y);

  printf("Digite as coordenadas do seu segundo ponto\n");
  scanf("%d %d", &a, &b);
  pt_2 = makepoint(a,b);

  printf("As coordenadas do seu novo ponto sao (%d,%d)\n", pt_2.x, pt_2.y);
  
  retangulo = makescreen(pt_1, pt_2);
  area = area_rect(retangulo);

  printf("Area do retangulo construido: %d\n", area);
  //pp = &pt_2;
 //printf("As coordenadas do seu segundo ponto sao (%d,%d)\n", pp->x, pp->y);

  return 0;
}