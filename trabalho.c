#include <stdio.h>
#include <stdlib.h> 

int main() {
    int escolhaMenu = 0; 
    char tabuleiro[3][3]; 
    char jogadorAtual; 
    int linha, coluna; 
    int jogadasFeitas; 
    int jogoGanho; 
    int i, j; 
    int entradaValida; 

    
    while (escolhaMenu != 4) {
        
        printf("+----------------------------+\n");
        printf("|        MENU PRINCIPAL      |\n");
        printf("+----------------------------+\n");
        printf("| 1 - NOVO JOGO              |\n");
        printf("| 2 - VER REGRAS             |\n");
        printf("| 3 - SOBRE O JOGO           |\n");
        printf("| 4 - SAIR                   |\n");
        printf("+----------------------------+\n");
        printf("Escolha uma opcao > ");

        entradaValida = scanf("%i", &escolhaMenu);
        // Limpa o buffer de entrada (essencial após scanf)
        int caractereBuffer;
        while ((caractereBuffer = getchar()) != '\n' && caractereBuffer != EOF);

        if (entradaValida != 1) {
            printf("\nOpcao invalida! Por favor, digite um numero.\n");
            printf("Pressione ENTER para continuar...");
            while ((caractereBuffer = getchar()) != '\n' && caractereBuffer != EOF); 
            continue; 
        }

        switch (escolhaMenu) {
            case 1: { 
                for (i = 0; i < 3; i++) {
                    for (j = 0; j < 3; j++) {
                        tabuleiro[i][j] = ' ';
                    }
                }
                jogadorAtual = 'X';
                jogadasFeitas = 0;
                jogoGanho = 0;

                printf("\n--- NOVO JOGO: Jogo da Velha ---\n");
                printf("Jogador 1: X | Jogador 2: O\n\n");

                do {
                    
                    printf("\n   1   2   3\n");
                    printf("1: %c | %c | %c\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
                    printf("  ---|---|---\n");
                    printf("2: %c | %c | %c\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
                    printf("  ---|---|---\n");
                    printf("3: %c | %c | %c\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
                    printf("\n");

                    printf("Vez do jogador %c. Digite a linha e a coluna (1-3):\n", jogadorAtual);

                    entradaValida = 0;
                    while (!entradaValida) {
                        printf("Linha: ");
                        if (scanf("%i", &linha) != 1) {
                            printf("Entrada invalida. Digite um numero para a linha.\n");
                            while ((caractereBuffer = getchar()) != '\n' && caractereBuffer != EOF); // Limpa 
                            continue;
                        }
                        while ((caractereBuffer = getchar()) != '\n' && caractereBuffer != EOF); // Limpa 

                        printf("Coluna: ");
                        if (scanf("%i", &coluna) != 1) {
                            printf("Entrada invalida. Digite um numero para a coluna.\n");
                            while ((caractereBuffer = getchar()) != '\n' && caractereBuffer != EOF); // Limpa 
                            continue;
                        }
                        while ((caractereBuffer = getchar()) != '\n' && caractereBuffer != EOF); // Limpa 

                        linha--;
                        coluna--;

                        if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ') {
                            entradaValida = 1; 
                        } else {
                            printf("Movimento invalido! A posicao deve ser entre 1-3 e estar vazia.\n");
                        }
                    }

                    tabuleiro[linha][coluna] = jogadorAtual;
                    jogadasFeitas++;

                
                    for (i = 0; i < 3; i++) {
                        if (tabuleiro[i][0] == jogadorAtual && tabuleiro[i][1] == jogadorAtual && tabuleiro[i][2] == jogadorAtual) {
                            jogoGanho = 1;
                            break;
                        }
                    }
                    if (jogoGanho) break; 

                    for (j = 0; j < 3; j++) {
                        if (tabuleiro[0][j] == jogadorAtual && tabuleiro[1][j] == jogadorAtual && tabuleiro[2][j] == jogadorAtual) {
                            jogoGanho = 1;
                            break;
                        }
                    }
                    if (jogoGanho) break; 
                    
                    if ((tabuleiro[0][0] == jogadorAtual && tabuleiro[1][1] == jogadorAtual && tabuleiro[2][2] == jogadorAtual) ||
                        (tabuleiro[0][2] == jogadorAtual && tabuleiro[1][1] == jogadorAtual && tabuleiro[2][0] == jogadorAtual)) {
                        jogoGanho = 1;
                    }

                    if (!jogoGanho) {
                        jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
                    }

                } while (!jogoGanho && jogadasFeitas < 9); 

                
                printf("\n--- FIM DE JOGO ---\n");
                printf("\n   1   2   3\n");
                printf("1: %c | %c | %c\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
                printf("  ---|---|---\n");
                printf("2: %c | %c | %c\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
                printf("  ---|---|---\n");
                printf("3: %c | %c | %c\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
                printf("\n");

                if (jogoGanho) {
                    printf("Parabens! O jogador %c venceu!\n", jogadorAtual);
                } else {
                    printf("Empate! Ninguem venceu.\n");
                }

                printf("Pressione ENTER para voltar ao menu principal...");
                while ((caractereBuffer = getchar()) != '\n' && caractereBuffer != EOF); 
                break;
            }
            case 2: { 
                printf("\n--- REGRAS DO JOGO DA VELHA ---\n\n");
                printf("1. O jogo e disputado em um tabuleiro 3x3.\n");
                printf("2. Dois jogadores se revezam marcando um espaco vazio.\n");
                printf("3. Um jogador usa 'X' e o outro usa 'O'.\n");
                printf("4. O objetivo e conseguir tres de suas marcas em uma linha, coluna ou diagonal.\n");
                printf("5. Se todas as 9 casas estiverem preenchidas e ninguem tiver vencido, o jogo termina em empate.\n\n");
                printf("Pressione ENTER para continuar...");
                while ((caractereBuffer = getchar()) != '\n' && caractereBuffer != EOF);
                break;
            }
            case 3: { 
                printf("\n--- Sobre o Jogo ---\n\n");
                printf("Desenvolvido em C\n");
                printf("Por DAVI GONCALVES 2512082031\n\n"); 
                printf("por VICTORIA PEREIRA 2512082020\n\n");
                printf("Copyright (C) 2025\n");
                printf("Pressione ENTER para continuar...");
                while ((caractereBuffer = getchar()) != '\n' && caractereBuffer != EOF);
                break;
            }
            case 4: { 
                printf("\nAte logo!\n");
                break;
            }
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                printf("Pressione ENTER para continuar...");
                while ((caractereBuffer = getchar()) != '\n' && caractereBuffer != EOF);
                break;
        }
        printf("\n"); 
    }

    return 0;
}