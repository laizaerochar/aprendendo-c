#include <stdio.h> // preciso incluir a biblioteca p escrever na tela
int main() { // a função/o método principal é a main(), a partir dela que o programa comecar a ser executado.
// printando uma mensagem de boas vindas
    printf("*****************************************\n");
    printf("*Bem vindo ao nosso jogo de advinhação*\n");
    printf("*****************************************\n");
    
    int numerosecreto = 42; //declarei uma var
    
    int chute;
    
    printf("Qual é o seu chute? ");
    scanf("%d", &chute); //scanf lê do teclado
    printf("Seu chute foi %d\n", chute);
    
    //printf("O número secreto era %d e seu chute foi %d\n", numerosecreto, chute);
}
