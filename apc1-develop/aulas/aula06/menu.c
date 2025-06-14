#include <stdio.h>

int main() {
    int opcao = 0;

    printf("menu principal\n");
    printf("1 - recarregar saldo\n");
    printf("2 - recarregar saldo\n");
    printf("3 - ver recados\n" );
    printf("4 - ver ligacoes\n");
    printf("5 - sair");

    printf("escolha uma opcao => ");
    scanf("%i, &opcao");

    // if(opcao == 1) {
    //    printf("seu saldo eh de R$ 10.00\n");
    // } else if (opcao == 2) {
    //    printf("degite 1 para R$ 10.00, 2 para 20.00 ou 5 para R$ 50.00\n");
    // } else if (opcao == 3) {
    //    printf("voce nao tem recados\n");
   //  } else if (opcao == 4) {
   // printf("ultimo numero foi 8888-8888\n");
    // } else if (opcao == 5) {
    //    printf("ate logo\n");
    // } else {
    //    printf("opcao invalida! tente novamente\n");
    // }

    switch(opcao) {
    case 1: printf("seu saldo eh de R$10.00\n"); break;
    case 2: printf("digite 1 para R$ 10.00, 2 para R$ 20.00 ou 5 para R$ 50.00"); break;
    case 3: printf("voce nao tem recados\n"); break;
    case 4: printf("ultimo numero foi 8888-8888\n"); break;
    case 5: printf("ate logo\n"); break;
    default: printf("opcao invalida! tente novamente");
    }
    return 0;
}