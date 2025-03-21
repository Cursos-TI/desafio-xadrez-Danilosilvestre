#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Movimento na diagonal do Bispo.
      int b = 0;

            printf("Movimento do Bispo:\n");

        while(b < 5){
            printf("Cima direita\n");
            b++;
        };
       
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

        // Movimento da Torre.
        printf("Movimento da Torre:\n");

        for( int i = 0; i < 5; i++ ){

            printf("Direita\n");
        }
            
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

       //Movimento da Rainha.
     int r = 0;

     printf("Movimento da Rainha:\n");

       do{
        printf("Esquerda\n");
        r++;
       }while(r < 8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

       int i, j;

       printf("Movimento do cavalo:\n");
       
      for(int i= 0; i < 1; i++){ // Movimento do cavalo.

        for(int j = 0; j < 2; j++){ // Loop de 2 casa para baixo.
            printf("Baixo\n");
        } 
        //Movimento para a esquerda.
        int c = 0;

         while (c < 1){
            printf("Esquerda\n");
            c++;
         }
        }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
