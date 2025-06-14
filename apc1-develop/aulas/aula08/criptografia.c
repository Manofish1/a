#include <stdio.h>

int main() {
    // atribuir uma string
char nome[30] = "Davi gon";
    //atribuir um conjunto de caracteres
char frase [31] = {'E','u',' ','p','r','o','g','r','a','m','o',' ','e','m',' ','c','\0'};

for(int i=0; i<30; i++) {
    printf("%c", frase[i]);
}
printf("\n");

printf("entre com uma frase: ");
scanf("%s", frase);

char cesar[6][5];
int k=0;
for(int i=0; i<6; i++) {
    for(int j=0; j<5; j++) {
        cesar[i][j] = frase[k];
        k++;
    }
}
printf("A frase codificada: "); 
for(int j=0; j<5;<j++) {
    for(int i=0; i<6;<i++) {
        printf("%c", cesar[i][j]);
    }
}
printf("\n");

    return 0;

}