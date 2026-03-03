// Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float dias, valorFinal, desconto;
    printf("Quantos dias trabalhados? ");
    scanf("%f", &dias);
    
    valorFinal = dias * 45;
    desconto = valorFinal * 8/100;
    valorFinal = valorFinal - desconto;
    
    printf("a receber: R$%.2f\nDesconto: R$%.2f\n", valorFinal, desconto);
    return 0;
}