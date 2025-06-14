#include <stdio.h>

    int main() {
    //     int numero0;
     //    int numero1;
     //   int numero2;
     //  int numero3;
     //   int numero4;
     //   int numero5;
     //   int numero6;
     //   int numero7;
     //   int numero8;
     //   int numero9;
     //   int numero10;
                                                          // 0 1 2  3  4  5  6 7  8 9 
 int numero[10]; // matriz unidimensional = vetor = array =|5|-1|10|6|-5|-7 |7|11|2|0| 

 // como acessa a posicao
 numero[0] = 5;
 numero[1] = -1;
 numero[2] = 10;
 numero[3] = 6;
 numero[4] = -5;
 numero[5] = -7;
 numero[6] = 7;
 numero[8] = 11;
 numero[9] = 2;
 numero[10] = 0;
 
 int menor = 99999;
 int maior = -99999;

printf("entre com 10 numeros inteiros\n");
 for(int i=0; i<10; i++) {
    printf("numero %i:", i+1);
    scanf("%i", &numero[i]);
  
   if (maior < numero[1]) {
    maior = numero[1];
 }
 if (menor > numero[1]) { 
    menor = numero[1];
 }
 }
 printf("seus numeros foram: ");
 for(int i=0; i<10; i++) {
    printf("%i", numero[1]);
 }
 printf("o maior numero foi %i e o menor numero foi %i\n, maior, menor");
        return 0;
    }