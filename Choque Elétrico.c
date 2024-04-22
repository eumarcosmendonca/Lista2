/*
Ao tentar colocar um Voltorb em uma piscina, Biu acabou levando um choque do trovão.
Curioso de saber qual foi a intensidade do choque que levou ele pesquisou e descobriu que existia uma relação entre o level do voltorb e a potência de seu choque. Como descrito na tabela abaixo.
Escreva um programa que, dado o level do voltorb, imprima de quanto foi o choque em W segundo a tabela:
Level	Potência (em W)
1-20 	20 + (level)3
21-40	8000 + (level - 10)2
41-60	9000 + 5*level
61-80	9300 + 2*level
81-100	9500 + level
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int level, calculo;

    scanf("%d", &level);

    if (level >= 1 && level <= 20) {
        calculo = (level * level * level) + 20;
        printf("Potencia de : %d W", calculo);
    }
    else if (level > 20 && level <= 40) {
        calculo = (((level - 10) * (level - 10)) + 8000);
        printf("Potencia de : %d W", calculo);
    }
    else if (level > 40 && level <= 60) {
        calculo = (5 * level) + 9000;
        printf("Potencia de : %d W", calculo);
    }
    else if (level > 60 && level <= 80) {
        calculo = (2 * level) + 9300;
        printf("Potencia de : %d W", calculo);
    }
    else if (level > 80 && level <= 100) {
        calculo = level + 9500;
        printf("Potencia de : %d W", calculo);
    }

	return 0;
}