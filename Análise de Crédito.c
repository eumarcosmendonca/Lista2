/*
Escreva um programa que determine qual é o valor mensal da parcela do empréstimo que um banco pode autorizar. Para isso, o programa precisa do valor do salário e de quanto a renda mensal já está comprometida com outros empréstimos. Considere que o limite de comprometimento do salário é de 30%. O programa deve calcular e mostrar na tela qual o limite disponível da parcela mensal do novo empréstimo.  Fique atento porque a renda mensal comprometida já pode exceder os 30% e neste caso o limite disponível da parcela mensal será zero.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float salario, valorComprometido, creditoDisponivel, total;

    scanf("%f", &salario);
    scanf("%f", &valorComprometido);

    creditoDisponivel = salario * 0.3;

    if (valorComprometido >= creditoDisponivel) {
        printf("0.00");
    }
    else {
        total = creditoDisponivel - valorComprometido;
        printf("%.2f", total);
    }
    
	return 0;
}