/*
Ambrósio é amigo da vizinhança e resolveu dar descontos para agradar seus clientes. A mercearia de Ambrósio contém apenas 04 itens, cujos preços são dados pela tabela abaixo:
A regra de desconto é bem simples: se a quantidade de produtos comprados for igual ou maior que quinze, então o desconto é concedido. O desconto também é concedido caso o valor total da compra seja maior ou igual a 40 reais.
O valor do desconto é de 15%.
Sua missão é fazer um programa que leia o código do produto, a quantidade comprada e imprima o valor que o cliente deve pagar, já considerando o desconto quando aplicável.
Considere que o cliente só pode comprar um único tipo produto cada vez que usar o seu software.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int produto, quantidade;
    float total, desconto, valor;

    scanf("%d\n", &produto);
    scanf("%d", &quantidade);

    if (produto == 1) {
        valor = quantidade * 5.30;
    }
    else if (produto == 2) {
        valor = quantidade * 6.00;
    }
    else if (produto == 3) {
        valor = quantidade * 3.20;
    }
    else if (produto == 4) {
        valor = quantidade * 2.50;
    }
    if (quantidade >= 15 || valor >= 40) {
        desconto = valor * 0.15;
        total = valor - desconto;
        printf("R$ %.2f", total);
    }
    else {
        printf("R$ %.2f", valor);
    }
    
	return 0;
}