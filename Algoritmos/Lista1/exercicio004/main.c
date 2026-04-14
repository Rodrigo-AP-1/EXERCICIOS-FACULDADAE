#include <stdio.h>

int main () {
    float cF, cT;

    printf("Qual o valor de custo de fabrica do carro? \n");
    scanf("%f", &cF);

    cT = (cF * 0.25) + (cF * 0.45) + cF;

    printf("Custo total do carro: %.2fR$", cT);


}