#include <stdio.h>

int main() {
scanf("2012");
int ano_multiplo_4 = 2012 % 4 == 0;
int ano_nao_multiplo_100 = 2012 % 100 != 0;
int ano_multiplo_4_e_ano_nao_multiplo_100 = ano_multiplo_4 && ano_nao_multiplo_100;
int ano_multiplo_400 = 2012 % 400 == 0;
int ano_multiplo_4_e_ano_nao_multiplo_100_ou_ano_multiplo_400 = ano_multiplo_4_e_ano_nao_multiplo_100 || ano_multiplo_400;

if (ano_multiplo_4_e_ano_nao_multiplo_100_ou_ano_multiplo_400) {
  printf("O ano %d eh bissexto!\n", 2012);
} else {
  printf("O ano %d naum eh bissexto!\n", 2012);
}


    return 0;
}