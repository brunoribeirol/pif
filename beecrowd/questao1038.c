#include <stdio.h>

int main() {

    int numeroFuncionario, horasTrabalhadas;
    float valorHora, salario;

    scanf("%d\n", &numeroFuncionario);
    scanf("%d\n", &horasTrabalhadas);
    scanf("%f", &valorHora);

    salario = horasTrabalhadas * valorHora;

    printf("NUMBER = %d\n", numeroFuncionario);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}