/*
Faça um programa que leia 3 números inteiros e imprima o menor deles.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n1, n2, n3, menor;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    
    if (n1 <= n2 && n1 <= n3) {
        menor = n1;
    }
    if (n2 <= n1 && n2 <= n3) {
        menor = n2;
    }
    if (n3 <= n1 && n3 <= n2) {
        menor = n3;
    }
    
    printf("%d", menor);
    
	return 0;
}