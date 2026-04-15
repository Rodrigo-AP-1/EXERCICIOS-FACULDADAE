#include <stdio.h>

int main () {
    int x;

    printf("Digite sua idade: ");
    scanf("%d", &x);

    if (x >=5 && 7 >= x) {
        printf("Infantil A");
    } else if (x >= 8 && 10 >= x) {
            printf("Infantil B");
    } else if (x >= 11 && 13 >= x) {
            printf("Juvenil A");
    } else if (x >= 14 && 17 >= x) {
            printf("Juvenil B");
    } else if (x >= 18) {
            printf("Adulto");
    } else {
            printf("Idade invalida");
    }   
}
            