#include <stdio.h>

int main() {
int numero = 0;

printf("entre um numero inteiro: ");
scanf("%i", &numero);

int eh_divisivel_por_2 = numero % 2 ==0;

if (eh_divisivel_por_2) {
printf("o numero %i eh par!\n", numero);
}

// if (eh_divisivel_por_2) {
   // printf("o numero %i eh impar!\n", numero);
// }
return 0;
}