/*
Anualmente, o MEC avalia os cursos universitários de todo o país e atribui conceitos com base em diversos critérios, sendo um deles a quantidade de livros disponíveis. Considerando as regras definidas abaixo, escreva um programa que receba como entrada a quantidade de livros e a quantidade de alunos de um curso (nessa ordem) e exiba a letra maiúscula correspondente ao conceito concedido pelo MEC.
1 livro para até 8 alunos --> Conceito A
1 livro para entre 9 e 12 alunos --> Conceito B
1 livro para entre 13 e 18 alunos --> Conceito C
1 livro para mais de 18 alunos --> Conceito D
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int livros, alunos;
    float media;

    scanf("%d", &livros);
    scanf("%d", &alunos);

    media = alunos / livros;

    if (media <= 8) {
        printf("A");
    }
    else if (media >= 9 && media <= 12) {
        printf("B");
    }
    else if (media >= 13 && media <= 18) {
        printf("C");
    }
    else if (media > 18) {
        printf("D");
    }

	return 0;
}