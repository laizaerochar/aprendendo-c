// Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("Digite 2 valores: ");
    scanf("%d%d", &a, &b);
    
    printf("Valor de a = %d\tValor de b = %d\n", a, b);
    
    
    
    printf("Valor de a = %d\tValor de b = %d", b, a);
    
    return 0;
}
//ou
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    printf("Digite 2 valores: ");
    scanf("%d%d", &a, &b);
    
    printf("Valor de a = %d\tValor de b = %d\n", a, b);
    
    c = a; //VAR AUXILIAR
    a = b;
    b = c; 
    
    printf("Valor de a = %d\tValor de b = %d", a, b);
    
    return 0;
}