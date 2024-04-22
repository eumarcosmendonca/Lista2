/*
Faça um programa que leia 3 números inteiros e imprima um (e apenas um) dos seguintes números:
1 (Se todos os números são iguais)
2 (Se todos os números são diferentes)
3 (Se apenas dois números são iguais)
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n1, n2, n3;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    
    if (n1 == n2 && n2 == n3 && n1 == n3) {
        printf("1");
    }
    else if (n1 != n2 && n1 != n3 && n2 != n3) {
        printf("2");
    }
    else {
        printf("3");
    }
    
	return 0;
}