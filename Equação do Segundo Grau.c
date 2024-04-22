/*
Toda vez que Ambrósio vai calcular as raízes de uma equação do segundo grau, esquece de algum detalhe e calcula errado. Para evitar esquecimentos, resolveu fazer um programa que calcula as raízes da equação de segundo grau.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double a, b, c, delta, raizQuadrada, raiz1, raiz2;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if (a == 0)
    {
        printf("NEESG");
    }

    else {

        delta = ((b * b) - (4 * a * c));
        raizQuadrada = sqrt(delta);
        
        if (raizQuadrada >= 0)
        {
            raiz1 = (- b + raizQuadrada) / (2 * a);
            raiz2 = (- b - raizQuadrada) / (2 * a);
            printf("%.2lf\n", raiz1);
            printf("%.2lf\n", raiz2);
        }

        else
        {
            printf("NRR");
        }
    }

	return 0;
}