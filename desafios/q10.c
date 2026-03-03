// 4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar, a conta será dividida igualmente.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numPessoas;
    float valorDespesa;
    float gorjeta;
    float valorTotal;
    float valorPorPessoa;
    
    printf("Digite o valor da conta, da gorjeta e a quantidade de pessoas: ");
    scanf("%f%f%d", &valorDespesa, &gorjeta, &numPessoas);
    valorTotal = valorDespesa + valorDespesa * gorjeta/100;
    valorPorPessoa = valorTotal / numPessoas;
    printf("Cada um irá pagar R$%.2f\n", valorPorPessoa);
    
    return 0;
}
