#include<stdio.h>

/*Dados ciertos centímetros como entrada de tipo decimal, escribir su equivalente a pies
(enteros) y pulgadas (decimal), dando las pulgadas con una precisión de 1 lugar
decimal. Considerar 2.54 cm por pulgada y 12 pulgadas por pie. La salida podrá ser:
333.3 cm son 10 pies y 11.2 pulgadas. */

int main () {

    float cent, pulg;
    int pies;

    printf("Ingrese centimetros a convertir: \n");
    scanf("%f", &cent);

    pulg = cent / 2.54;
    pies = cent / 30.48;

    printf("%.1f cm son %i pies y %.1f pulgadas\n", cent, pies, pulg);

}