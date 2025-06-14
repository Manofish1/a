#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
char verbo[21];
memset(verbo, '\0', sizeof(verbo)); //preencha a string com \0

char pronomes[6][5] = {"EU", "TU", "NOS", "VOS", "ELES"};
char sufixo[6][5] = {"o", "AS", "A", "OS", "AIS", "AM"};

printf("entre com um verbo terminado em AR: ");
scanf("%s", verbo);

int tamanho = strlen(verbo);

for(int i=0; i<tamanho; i++) {
verbo[i] = toupper(verbo[i]); //converta para maiusculo
}

int ultima_posicao = tamanho -1;
int penultima_posicao = ultima_posicao -1;

if(verbo[ultima_posicao] == 'R' && verbo[penultima_posicao] == 'A') {
    printf("conjugacao do verbo %s no presente do indicativo\n", verbo);
    char radical[21];
    strcpy(radical, verbo); //radical = verbo
radical[penultima_posicao] = '\0';
for(int i=0; i<6; i++) {
    char conjugacao[61];
    strcpy(conjugacao, pronomes[i]);
    strcat(conjugacao, " "); //conjugar = conjugacao + " "; 
    strcat(conjugacao, radical);
    strcat(conjugacao, sufixo[1]);
    printf("%s\n", conjugacao);
}
} else {
    printf("conjugacao %s nao termina em AR!\n", verbo);
}

    return 0;
}