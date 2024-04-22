/*
O Getran resolveu instalar um radar no caminho entre a sua casa e a sua faculdade com o objetivo de limitar a velocidade dos carros em uma determinada via.
Mas resolveram inovar e a velocidade da via pode ser alterada diariamente. Por exemplo, nos feriados, eles geralmente colocam a velocidade máxima em 80Km/h. Já durante a semana, é comum que a velocidade máxima seja de 60km/h.
Para isso, placas digitais informam aos motoristas qual é a velocidade máxima naquele momento.
A tabela de penalizações para quem ultrapassar esse limite é:
Velocidade até 20% superior ao permitido: multa de R$ 85.13 e 4 pontos na carteira;
Velocidade maior que 20% e até 50% acima do permitido: multa de R$ 127.69 e 5 pontos na carteira;
Velocidade acima de 50% do permitido: multa de R$ 574.62 , 7 pontos na carteira, apreensão da carteira e suspensão do direito de dirigir.
Você irá receber a velocidade máxima da via, a velocidade do carro e deve calcular o valor da multa e quantos pontos na carteira o motorista perdeu, caso ele tenha ultrapassado o limite.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double velocidadeMaxima, velocidadeVeiculo, acrescimo20, velocidadeMais20, acrescimo50, velocidadeMais50;
    
    scanf("%lf", &velocidadeMaxima);
    scanf("%lf", &velocidadeVeiculo);

    acrescimo20 = velocidadeMaxima * 0.2;
    velocidadeMais20 = velocidadeMaxima + acrescimo20;

    acrescimo50 = velocidadeMaxima * 0.5;
    velocidadeMais50 = velocidadeMaxima + acrescimo50;

    if (velocidadeVeiculo > velocidadeMaxima && velocidadeVeiculo <= velocidadeMais20)
    {
        printf("85.13\n");
        printf("4");
    }

    else if (velocidadeVeiculo > velocidadeMais20 && velocidadeVeiculo <= velocidadeMais50)
    {
        printf("127.69\n");
        printf("5");
    }

    else if (velocidadeVeiculo > velocidadeMais50)
    {
        printf("574.62\n");
        printf("7");
    }

    else
    {
        printf("0.00\n");
        printf("0");
    }

	return 0;
}