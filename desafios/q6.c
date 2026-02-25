// Escreva um programa que peça um inteiro ao usuário, e com esse inteiro, ele imprima, linha-a-linha, a tabuada daquele número até o 10

#include <stdio.h>

int main() {
    int numero;
    printf("Qual número você deseja saber a tabuada? ");
    scanf("%d", &numero);

    for(int i = 0; i <=10; i++) {
        int multiplicacao = numero * i;
        printf("%d x %d = %d\n", numero, i, multiplicacao);
    }
}