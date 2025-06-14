#include <stdio.h>

int main() {
int idade = 0;

printf("informe sua idade: ");
scanf("%i, &idade");

if (idade < 16) {
printf("voce nao pode votar!\n");
} else {
    if (idade >= 18) {
        printf("voce eh obrigado a votar!\n");
    } else {    
        printf("voce pode votar!\n");
    }
}
    return 0;
}