#include <stdio.h>

struct rect makescreen(struct point p1, struct point p2)
{
    struct rect temp;

    temp.pt1 = p1;

    temp.pt2 = p2;

    return temp;

}

int area_rect(struct rect retangulo){

int altura,base;

altura = abs(retangulo.pt1.y - retangulo.pt2.y);

base = abs(retangulo.pt1.x - retangulo.pt2.x);

return altura*base;

}

int main()
{


    return 0;
}