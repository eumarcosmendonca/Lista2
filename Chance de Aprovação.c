/*
Uma pesquisa realizada na UFS em turmas de graduação da disciplina Introdução à Ciência da Computação calculou a chance de aprovação a partir do cumprimento de atividades no The Huxley. Constatou-se que a chance aprovação cresce conforme as atividades colocadas para os alunos semanalmente são cumpridas pelos mesmos. As faixas são apresentadas na tabela abaixo:
%de atividades cumpridas Chance de aprovação Conceito
[0,20) 4,40% Pessimo
[20,40) 31,65% Ruim
[40,60) 56,82% Bom
[60,80) 80,00% Muito Bom
[80,100] 94,00% Excelente
Escreva um programa que receba em uma mesma linha a quantidade de problemas passados pelo professor e a quantidade de questões resolvidas por um aluno. Em seguida, o programa deve calcular e imprimir na tela o percentual de atividades cumpridas juntamente com a chance de aprovação do aluno, ambos com 2 casas decimais, conforme regras da tabela acima. Além disso, deve atribuir um conceito variando de Pessimo a Excelente, conforme consta na tabela acima.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int quantidadeProblemas, quantidadeProblemasResolvidos;
    float media;

    scanf("%d", &quantidadeProblemas);
    scanf("%d", &quantidadeProblemasResolvidos);

    media = (quantidadeProblemasResolvidos * 100) / (double)quantidadeProblemas;

    if (media >= 0 && media < 20) {
        printf("%.2lf%% 4.40%% Pessimo", media);
    }
    else if (media >= 20 && media < 40) {
        printf("%.2lf%% 31.65%% Ruim", media);
    }
    else if (media >= 40 && media < 60) {
        printf("%.2lf%% 56.82%% Bom", media);
    }
    else if (media >= 60 && media < 80) {
        printf("%.2lf%% 80.00%% Muito Bom", media);
    }
    else if (media >= 80 && media <= 100) {
        printf("%.2lf%% 94.00%% Excelente", media);
    }

	return 0;
}