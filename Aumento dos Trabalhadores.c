/*
Devido à proximidade com o Dia do Trabalho, uma empresa resolveu conceder aumentos salariais a seus funcionários. Aqueles com salário superior a R$ 500, terão aumento de 10%, enquanto os que ganham mais de R$ 300 terão aumento de 7%. Os demais funcionários terão aumento de apenas 5%. Escreva um programa que receba como entrada o salário atual de um funcionário, calcule e exiba o valor de seu novo salário já com o aumento concedido.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double salario, total, aumento;

    scanf("%lf", &salario);
    
    if (salario >= 300 && salario <= 500) {
        aumento = salario * 0.07;
        total = salario + aumento;
        printf("%.2lf", total);
    }
    else if (salario > 500) {
        aumento = salario * 0.10;
        total = salario + aumento;
        printf("%.2lf", total);
    }
    else {
        aumento = salario * 0.05;
        total = salario + aumento;
        printf("%.2lf", total);
    }
    
	return 0;
}