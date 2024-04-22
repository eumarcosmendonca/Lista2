/*
Faça um programa que leia a idade (valor inteiro) de uma pessoa e informe sua classe eleitoral:
nao eleitor (abaixo de 16 anos)
eleitor obrigatorio (maior e igual a 18 ou menor e igual a 65 anos)
eleitor facultativo (entre 16 e 18 anos ou acima dos 65 anos)
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int idade;

    scanf("%d", &idade);

    if (idade < 16) {
        printf("nao eleitor");
    }
    else if (idade >= 16 && idade < 18) {
        printf("eleitor facultativo");
    }
    else if (idade > 65) {
        printf("eleitor facultativo");
    }
    else if (idade >= 18 && idade <= 65) {
        printf("eleitor obrigatorio");
    }

	return 0;
}