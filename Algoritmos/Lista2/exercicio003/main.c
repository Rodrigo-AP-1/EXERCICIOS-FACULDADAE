#include <stdio.h>

int main () {
    int A, B, C;

    printf("Digite o numero A: \n");
    scanf("%d", &A);
    printf("Digite o numero B: \n");
    scanf("%d", &B);
    printf("Digite o numero C: \n");
    scanf("%d", &C);

    if (A < (B+C) && B < (C+A) && C < (A+B)) {
        printf("Pode ser um triangulo");
    } else {
        printf("nao pode ser um triangulo");
    }

    return 0;
}