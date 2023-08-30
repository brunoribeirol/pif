#include <stdio.h>

int main() {

    int numeroFuncionario, horasTrabalhadas;
    float valorHora;

    scanf("%d\n", &numeroFuncionario);
    scanf("%d\n", &horasTrabalhadas);
    scanf("%f", &valorHora);

    float salario;

    salario = horasTrabalhadas * valorHora;

    printf("NUMBER = %d\n", numeroFuncionario);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}