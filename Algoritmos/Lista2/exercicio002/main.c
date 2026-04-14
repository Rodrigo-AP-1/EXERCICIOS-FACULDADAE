#include <stdio.h>

int main() {
    float nota;

    printf("Qual nota voce tirou na prova?: \n");
    scanf("%f", &nota);

    if (nota >= 0 && nota < 5) {
        printf("Conceito D");
    } else if (nota >= 5 && nota < 7) {
        printf("Conceito C");
    } else if (nota >= 7 && nota < 9) {
        printf("Conceito B");
    } else {
        printf("Conceito A");
    }
}