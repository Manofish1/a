#include <stdio.h>

int main() {
    // + soma
    // - subtracao
    // * multiplicacao
    // / divisao
    // % resto da divisao

    int numero1 = 10;
    int numero2 = 20;
    int soma = numero1 + numero2;
    printf("a soma de %i e %i = %i\n", numero1, numero2, soma);

    int subtracao = numero1 - numero2;
    printf("a subetracao de %i e %i = %i\n", numero1, numero2, subtracao);

    int multiplicacao = numero1 * numero2;
    printf("a multiplicacao de %i e %i = %i\n", numero1 ,numero2, multiplicacao);

    float divisao = numero1 * 1.0f / numero2;
    printf("a divisao de %i e %i = %1.1f\n", numero1, numero2, divisao);
     
    int resto = numero1 % numero2;
    printf("o resto de %i e %i = %i\n", numero1, numero2, resto);

    int operacao = 1 * 2 / (3 + 4 - 2 *1);

    return 0;
}