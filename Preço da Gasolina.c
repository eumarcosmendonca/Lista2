/*
Um posto está vendendo combustíveis com a seguinte tabela de descontos:
a. Álcool:
b. até 20 litros, desconto de 3% por litro
c. acima de 20 litros, desconto de 5% por litro
d. Gasolina:
e. até 20 litros, desconto de 4% por litro
f. acima de 20 litros, desconto de 6% por litro
g. Diesel:
h. até 25 litros, não existe desconto
i. acima de 25 litros, desconto de 4% por litro
Implemente um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina e D-Diesel), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,50, o preço do litro do álcool é R$ 1,90 e o preço do litro de Diesel é R$ 1,66.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double litros, valor, total, desconto;
    char combustivel;

    scanf("%lf", &litros);
    scanf(" %c", &combustivel);

    if (combustivel == 'A')
    {
        if (litros <= 20)
        {
            valor = litros * 1.90;
            desconto = valor * 0.03;
            total = valor - desconto;
            printf("R$ %.2lf", total);
        }
        else if (litros > 20)
        {
            valor = litros * 1.90;
            desconto = valor * 0.05;
            total = valor - desconto;
            printf("R$ %.2lf", total);
        }
    }

    else if (combustivel == 'G')
    {
        if (litros <= 20)
        {
            valor = litros * 2.50;
            desconto = valor * 0.04;
            total = valor - desconto;
            printf("R$ %.2lf", total);
        }
        else if (litros > 20)
        {
            valor = litros * 2.50;
            desconto = valor * 0.06;
            total = valor - desconto;
            printf("R$ %.2lf", total);
        }
    }

    else if (combustivel == 'D')
    {
        if (litros <= 25)
        {
            valor = litros * 1.66;
            desconto = 0;
            total = valor - desconto;
            printf("R$ %.2lf", total);
        }
        else if (litros > 25)
        {
            valor = litros * 1.66;
            desconto = valor * 0.04;
            total = valor - desconto;
            printf("R$ %.2lf", total);
        }
    }

	return 0;
}