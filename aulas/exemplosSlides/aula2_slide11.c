#include <stdio.h>

int main() {

    int x, y;

    printf("Digite 2 numero inteiros de 0 a 100: ");
    scanf("%d %d", &x, &y);

    if (x != y)
    {
        if (x > y) {
            printf("%d eh maior que %d\n", x, y);
        }
        else {
            printf("%d eh maior que %d\n", y, x);
        } 
    }
    else {
        printf("Os numeros %d e %d que voce digitou sao iguais\n", x, y);
    }
    
    return 0;
}