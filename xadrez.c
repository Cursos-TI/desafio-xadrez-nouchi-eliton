#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentar(int i, int n_movimento, char direcao[20]){
    if(i < n_movimento){
        printf("%s", direcao);
        i++;
        movimentar(i, n_movimento, direcao);
    }
    
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int n_mov_bispo = 5, n_mov_torre = 5, n_mov_rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // for (int i=0; i < mov_bispo; i++){
    //     printf("*** Movimento do Bispo ***\n");
    //     printf("Cima,direita\n");
    // }
    printf("Movimento do Bispo!\n");
    movimentar(0, n_mov_bispo, "Cima,direita\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // for (int i=0; i < mov_torre; i++){
    //     printf("*** Movimento da Torre ***\n");
    //     printf("Direita\n");
    // }
    printf("Movimento da Torre!\n");
    movimentar(0, n_mov_torre, "Direita\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // for (int i=0; i < mov_torre; i++){
    //     printf("*** Movimento da Rainha ***\n");
    //     printf("Esquerda\n");
    // }
    printf("Movimento da Rainha!\n");
    movimentar(0, n_mov_rainha, "Esquerda\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimento do Cavalo!\n");
    for (int i=0, j=0; j <= 2; i++, j++){
        if (i > 1){
            printf("Direita\n");
            break;
        }
        printf("Cima\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
