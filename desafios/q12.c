// Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dólares.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float valorReal, valorDolar;
    printf("Digite o valor em reais a ser convertidos: ");
    scanf("%f", &valorReal);
    valorDolar = valorReal / 5.3;
    printf("Valor em Dólar $%.2f\n", valorDolar);
    
    return 0;
}