/*
Você deve ajudar seu professor a descobrir qual a situação dos alunos de uma turma. Faça um programa que recebe como entrada 3 notas do usuário, calcula a média do aluno naquele semestre e, em seguida, informa a situação do aluno:
"Aprovado", se a média estiver no intervalo [70; 100]
"Reprovado", se a média estiver no intervalo [0; 40] 
"Final", se a média estiver no intervalo (40; 70).
"Média inválida" em qualquer outro caso.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float nota1, nota2, nota3, media;

    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 0 && media <= 100) {
        if (media >= 0 && media <= 40) {
            printf("A media do aluno foi %.2f e ele foi REPROVADO", media);
        }
        else if (media > 40 && media <= 70) {
            printf("A media do aluno foi %.2f e ele foi FINAL", media);
        }
        else if (media > 70 && media <= 100) {
            printf("A media do aluno foi %.2f e ele foi APROVADO", media);
        }
    }
    else {
        printf("Media invalida");
    }
    
	return 0;
}