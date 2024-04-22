/*
Receba dois números inteiros e os imprima em ordem crescente.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a, b, c;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    if (a > b) {
        c = a;
        printf("%d %d", b, c);
    }
    
    else {
        printf("%d %d", a, b);
    }
    
	return 0;
}