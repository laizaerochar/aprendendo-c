// Escreva uma função soma que recebe um array de inteiros e o tamanho do array, e retorna a soma dos números desse array.

#include <stdio.h>

int soma(int* nums, int tam) { 
    int total = 0;

    // laco p percorrer todo o array
    for(int i = 0; i < tam; i++) {
        total += nums[i]; //poderia ser *(nums + i), acessando o array via ponteiro
    }
    return total;
}

// criar um array
int main() {
    int v[] = {1, 2, 3, 4, 5};

    int resultado = soma(v, 5); //passando o array p funcao

    printf("soma = %d\n", resultado);
    return 0;
}