/*
Uma empresa decidiu dar um aumento de salário aos seus colaboradores e lhe contratou para desenvolver o programa que calculará os reajustes.
Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
a) salários até R$ 280,00 (incluindo) : aumento de 20%
b)salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
c)salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
d)salários de R$ 1500,00 em diante : aumento de 5%
Após o aumento ser realizado, informe na tela:
o salário antes do reajuste;
o percentual de aumento aplicado;
o valor do aumento;
o novo salário, após o aumento.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int desconto;
    float salario, salarioNovo, valorAumento;

    scanf("%f", &salario);

    if (salario <= 280) {
        valorAumento = salario * 0.2;
        salarioNovo = salario + valorAumento;
        desconto = 20;
    }
    else if (salario >= 280 && salario < 700) {
        valorAumento = salario * 0.15;
        salarioNovo = salario + valorAumento;
        desconto = 15;
    }
    else if (salario >= 700 && salario < 1500) {
        valorAumento = salario * 0.1;
        salarioNovo = salario + valorAumento;
        desconto = 10;
    }
    else if (salario >= 1500) {
        valorAumento = salario * 0.05;
        salarioNovo = salario + valorAumento;
        desconto = 5;
    }

    printf("%.2f\n", salario);
    printf("%d\n", desconto);
    printf("%.2f\n", valorAumento);
    printf("%.2f", salarioNovo);

	return 0;
}