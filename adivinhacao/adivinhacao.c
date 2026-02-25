#include <stdio.h> // preciso incluir a biblioteca p escrever na tela
#include <stdlib.h>
#include <time.h>

int main() { // a função/o método principal é a main(), a partir dela que o programa comecar a ser executado.
// printando uma mensagem de boas vindas
    printf("*****************************************\n");
    printf("*Bem vindo ao nosso jogo de advinhação*\n");
    printf("*****************************************\n");
    
    int segundos = time(0);
    srand(segundos);
    
    int numerogrande = rand();
    
    int numerosecreto = numerogrande % 100; 
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    
    
    while(1) {
    
        printf("Tentativa %d\n", tentativas); 
        printf("Qual é o seu chute? ");
        scanf("%d", &chute); //scanf lê do teclado
        if (chute < 0) {
            printf("Você não pode chutar número negativo\n");
            
            continue;
        }
        
        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;
        
        if(acertou) {
            printf("Parabéns! Você acertou!\n");
            
            break;
        }
         
        else if(maior) {
            printf("Seu chute foi maior que o número secreto\n");
        }
        
        else {
            printf("Seu chute foi menor que o número secreto\n");
        }
        tentativas++; // == tentativas = tentativas + 1;
        
        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
        
    }
    printf("Fim de jogo!\n");
    printf("Você acertou em %d\n", tentativas);
    printf("Total de pontos: %.1f\n", pontos);
    
}
