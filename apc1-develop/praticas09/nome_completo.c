#include <stdio.h>
#include <string.h>
 int main() {
    char primeiro_nome[11];
    char ultimo_nome[11];
    scanf("%c", &primeiro_nome);
    scanf("%c", &ultimo_nome);
    char nome[31];
    strcpy(nome, primeiro_nome);
    strcat(nome, " ");
    strcat(nome, ultimo_nome);
    printf("nome");

    
    return 0;
 }