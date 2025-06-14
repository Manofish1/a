#include <stdio.h>

int main() {
    int idada = 0;

    printf("entre com sua idade: ");
    scanf("%i", &idade);
    getchar();
    printf("voce tem %i anos!\n", idade);

    float nota = 0.0f;
    printf("entre com sua nota: ");
    scanf("%f, &nota");
    gitchar();
    printf("vc tirou %.1f\n", nota);
    return 0;
}