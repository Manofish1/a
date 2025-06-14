#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao = 0;
    char tabuleiro[3][3];
    char jogadoratual;
    int linha, coluna;
    int jogadasfeitas

    while (opcao != 4) {
        printf("+----------------------------+\n");
        printf("|       MENU PRINCIPAL       | \n");
        printf("+----------------------------+\n");
        printf("| 1 - NOVO JOGO              |\n");
        printf("| 2 - ver regras             | \n");
        printf("| 3 - sobre o jogo           | \n");
        printf("| 4 - sair                   | \n");
        printf("+----------------------------+\n");
        printf("Escolha uma opcao > ");
        scanf("%i", &opcao);
        while (getchar() != '\n');

        switch (opcao)
        {

        case 1: {
            printf("Nivel do jogo\n");
            printf("1 - facil\n");
            printf("2 - medio\n");
            printf("3 - dificil\n");
            printf("escolha um nivel > \n");
            scanf("%i", &nivel);
            while (getchar() != '\n')
                ;
            break;
        }
        case 2: {
            printf("score do jogo\n");
            printf("1 - jogador A - 10000 pontos\n");
            printf("2 - jogador B - 7000 pontos\n");
            printf("3 - jogador C - 5000 pontos\n");
            printf("4 - jogador D - 3000 pontos\n");
            printf("5 - jogador E - 1000 pontos\n");
            printf("pressione ENTER para continuar...");
            while (getchar() != '\n')
                ;
            break;
        }
        case 3: {
            printf("sobre o jogo\n\n");
            printf("desenvolvido em C\n");
            printf("por DAVI GON\n\n");
            printf("copyright(C) 2025\n");
            printf("pressione ENTER para continuar...");
            while (getchar() != '\n')
                ;
            break;
        }
        case 4: {
            printf("ate logo!\n");
            break;
        }
        default:
            printf("opcao invalida! tente novamente.\n");
        }
    }

    return 0;
}