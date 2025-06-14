#include <stdio.h>

int main() {
    printf("insira um numero: ");
    int numero;
    int fatorial = 1;
    scanf("%i", &numero);
    for(int i=numero; i>0; i--) {
        fatorial = fatorial * i;
    }
    printf("%i e %i", numero, fatorial);

    return 0;
}