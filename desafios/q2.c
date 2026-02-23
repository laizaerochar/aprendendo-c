// Escreva um programa que peça para o usuário digitar duas variáveis inteiras (x e y) e imprima o resultado da multiplicação entre essas duas variáveis.
#include <stdio.h>
int main() {
    int x;
    int y;
    printf("Digite um número inteiro qualquer: ");
    scanf("%d", &x);
    printf("Digite um outro número inteiro qualquer: ");
    scanf("%d", &y);
    int resultado;
    resultado = x * y;
    printf("O resultado da multiplicação de %d x %d = %d\n", x, y, resultado);
}