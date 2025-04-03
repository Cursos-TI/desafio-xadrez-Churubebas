#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int menu, torre=0, bispo=0, repeticao=1, rainha;
    while (repeticao==1)//repeticao para facilitar a reproducao do jogo.
    {
       
    
    
        printf(">>>BEM VINDO AO JODO DE XADREZ<<<\n");//menu para navegar entre as pecas.
        printf("\t>>>MENU<<<\n");
        printf("\t1. Torre\n");
        printf("\t2. Bispo\n");
        printf("\t3. Rainha\n");
        printf("\t4. SAIR\n");
        scanf("%d", &menu);
        fflush(stdin);
        
        switch (menu)
        {
        case 1:
            printf("Torre andou:\n");
            while (torre<5)//while controlando a torre, por 5 casas a direita.
            {
                torre++;
                printf("DIREITA\n");
            }
            torre=0;
            break;
        
        case 2://do while controlando o Bispo por 5 casas na diagonal(cima, direita).
            printf("Bispo andou:\n");
            do{
                bispo++;
                printf("CIMA\n");
                printf("DIREITA\n");
            } while (bispo<5);
            bispo=0;
            break;

        case 3://for controlando a rainha 8 casas a esquerda.
            printf("Rainha andou:\n");
            for (rainha = 0; rainha < 8; rainha++)
            {
                printf("ESQUERDA\n");
            }
            break;

        case 4:// finalizacao do loop e fim do jogo.
            repeticao++;
            printf("FINALIZANDO JOGO");
    
        default:
            
            break;}

    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
