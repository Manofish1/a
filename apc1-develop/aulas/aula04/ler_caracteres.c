#include <stdio.h>

int main() {
char tecla;

printf("pressione uma tecla e depois ENTER");
scanf("%c", &tecla); // tecla = 'a';
getchar(); // ler o /n da leitura anterior

printf("voce pressionou a tecla '%c'\n", tecla);

printf("pressione otra tecla e depois ENTER: ");
scanf("voce pressionou a tecla %c\n", tecla);
getchar(); // ler o /n da leitura anterior

printf(" voce pressionou a tecla %c\n", tecla);

char nome[31];
printf("entre  com seu nome: ");
scanf("%[^\n]s", nome);
printf("vc digitou %s\n", nome);

    return 0;
}