// Escreva uma função soma que recebe um ponteiro de inteiro num e mais dois inteiros a e b. A função deve calcular a soma de a+b em num.

#include <stdio.h>
 
 void soma(int* num, int a, int b) {
     *num = a + b;
 }
 int main() {
     int resultado;
     
     soma(&resultado, 5, 3); 
     printf("resultado %d\n", resultado);
     
     return 0;
 }

// EXPLICACA0: 
// resultado é uma variavel e o & pega o endereco dessa variavel, a funcao escreve o valor dentro dela msm usando o ponteiro
