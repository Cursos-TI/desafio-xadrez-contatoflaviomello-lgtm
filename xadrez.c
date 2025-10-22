#include <stdio.h>

int main(void) {
    /* =========================================================
       DESAFIO: Movimentação das peças de xadrez
       NÍVEL: Aventureiro
       OBJETIVO: Simular o movimento das peças (Torre, Bispo, Rainha e Cavalo)
       USANDO: Estruturas de repetição (for, while, do-while e loops aninhados)
       ========================================================= */

    /* ---------------- VARIÁVEIS GERAIS ---------------- */
    int torre_passos = 5;    // Movimento da Torre (5 casas à direita)
    int bispo_passos = 5;    // Movimento do Bispo (5 casas na diagonal cima-direita)
    int rainha_passos = 8;   // Movimento da Rainha (8 casas à esquerda)
    int i;                   // Contador genérico para os laços
    int j;                   // Contador auxiliar para loops aninhados do Cavalo

    /* =========================================================
       MOVIMENTO DA TORRE — utilizando o loop "for"
       ========================================================= */
    printf("Torre: movendo %d casas para a direita\n", torre_passos);
    for (i = 1; i <= torre_passos; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Espaço entre as peças

    /* =========================================================
       MOVIMENTO DO BISPO — utilizando o loop "while"
       ========================================================= */
    printf("Bispo: movendo %d casas na diagonal (Cima Direita)\n", bispo_passos);
    i = 1;
    while (i <= bispo_passos) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n"); // Espaço entre as peças

    /* =========================================================
       MOVIMENTO DA RAINHA — utilizando o loop "do-while"
       ========================================================= */
    printf("Rainha: movendo %d casas para a esquerda\n", rainha_passos);
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < rainha_passos);

    printf("\n"); // Espaço entre as peças

    /* =========================================================
       MOVIMENTO DO CAVALO — utilizando loops aninhados
       =========================================================
       O Cavalo move-se em "L": duas casas para baixo e uma para a esquerda.
       Estrutura usada:
           - Um loop "for" (obrigatório) para o movimento principal (2 casas para baixo)
           - Um loop "do-while" interno para o movimento perpendicular (1 casa à esquerda)
       ========================================================= */

    int cavalo_baixo = 2;   // Número de casas para baixo
    int cavalo_esquerda = 1; // Número de casas para esquerda

    printf("Cavalo: movendo em 'L' (duas casas para baixo e uma para a esquerda)\n");

    /* Loop externo: controla o movimento para baixo */
    for (i = 1; i <= cavalo_baixo; i++) {
        printf("Baixo\n");

        /* Loop interno: controla o movimento para a esquerda após descer as duas casas */
        if (i == cavalo_baixo) {  // Executa o movimento lateral somente no final do "L"
            j = 0;
            do {
                printf("Esquerda\n");
                j++;
            } while (j < cavalo_esquerda);
        }
    }

    printf("\nFim da simulação dos movimentos das peças.\n");

    return 0;
}
