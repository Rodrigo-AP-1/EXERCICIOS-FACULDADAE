#include <stdio.h>

int main() {
    int ggremio, ginter;

    printf("Quantos gols o gremio fez? e quantos o Inter fez?: ");
    scanf("%d %d", &ggremio, &ginter);

    if (ggremio > ginter) {
        printf("Vencedor: Gremio");
    } else if (ggremio == ginter) {
        printf("Empate");
    } else {
        printf("Vencedor: Inter");
    }
}