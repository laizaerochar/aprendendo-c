// Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma var auxiliar

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("Digite 2 valores: ");
    scanf("%d%d", &a, &b);
    
    printf("Valor de a = %d\tValor de b = %d\n", a, b);
    
    a = a + b
    b = a - b;
    a = a - b;
    
    printf("Valor de a = %d\tValor de b = %d", a, b);
    
    return 0;
}