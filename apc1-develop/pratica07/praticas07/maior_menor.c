#include <stdio.h> 
int main() {
    int numero;
    int maior;
    int menor;
    printf("insira numeros inteiros");
scanf("%i",&numero);
maior = numero;
menor = numero;

while(numero != 0) {
    if (numero > maior) {
        maior = numero;
     }
     
}

    return 0;
}