#include <stdio.h>

int main() {

    float A, B, C, maior, meio, menor;

    scanf("%f %f %f", &A, &B, &C);


    if (A >= B && A >= C)
    {
        A = maior;
        if (B >= C)
        {
            B = meio;
            C = menor;
        }
        else {
            C = meio;
            B = menor;
        }   
    }

    else if (B >= A && B >= C)
    {
        B = maior = B;
        if (A >= C)
        {
            A = meio;
            C = menor;
        }
        else {
            C = meio;
            A = menor;
        }   
    }

    else
    {
       C = maior = C;
        if (A >= B)
        {
            A= meio;
            B = menor;
        }
        else {
            B = meio;
            A = menor;
        } 
    }

    if (A >= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else {
        if ((A * A) == (B * B) + (C * C))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if ((A * A) > (B * B) + (C * C))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if ((A * A) < (B * B) + (C * C))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (A == B && B == C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (A == B || B == C)
        {
            printf("TRIANGULO ISOSCELES\n");
        }

    }
    
    return 0;
}

//beecrowd 1045
  
