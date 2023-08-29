#include <stdio.h>

int main() {

    float salario, novoSalario, reajuste;
    int percentual;

    scanf("%f", &salario);

    if (salario > 0 && salario <= 400) {
        percentual = 15;
        reajuste = salario * 0.15;
        novoSalario = salario + reajuste;

        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %d %%\n", percentual);
    }
    else if (salario > 400 && salario <= 800) {
        percentual = 12;
        reajuste = salario * 0.12;
        novoSalario = salario + reajuste;
        
        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %d %%\n", percentual);
    }
    else if (salario > 800 && salario <= 1200) {
        percentual = 10;
        reajuste = salario * 0.10;
        novoSalario = salario + reajuste;
        
        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %d %%\n", percentual);
    }
    else if (salario > 1200 && salario <= 2000) {
        percentual = 7;
        reajuste = salario * 0.07;
        novoSalario = salario + reajuste;
        
        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %d %%\n", percentual);
    }
    else {
        percentual = 4;
        reajuste = salario * 0.04;
        novoSalario = salario + reajuste;
        
        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %d %%\n", percentual);
    }
    
    return 0;
}
//beecrowd 1048