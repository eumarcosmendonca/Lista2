/*
Faça um programa que leia dois valores inteiros (x e y) e imprima na tela o resultado das seguintes comparações entre estes dois valores, exatamente nesta ordem:
x é maior que y
x é igual a y
x é menor que y
x é diferente de y
x é maior ou igual a y
x é menor ou igual a y
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int x, y, res1 = 0, res2 = 0, res3 = 0, res4 = 0, res5 = 0, res6 = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y) {
        res1 = 1;
    }
    if (x == y) {
        res2 = 1;
    }
    if (x < y) {
        res3 = 1;
    }
    if (x != y) {
        res4 = 1;
    }
    if (x >= y) {
        res5 = 1;
    }
    if (x <= y) {
        res6 = 1;
    }

    printf("%d\n", res1);
    printf("%d\n", res2);
    printf("%d\n", res3);
    printf("%d\n", res4);
    printf("%d\n", res5);
    printf("%d\n", res6);

	return 0;
}