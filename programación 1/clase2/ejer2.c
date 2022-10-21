#include <stdio.h>

int main(){

    float fulbito = 150.5;
    int cantidad;
    float subtotal;
    float descuento;
    float total;

    printf("Ingrese una cantidad de alfajores: ");
    scanf("%i", &cantidad);

    subtotal = fulbito * cantidad;

    printf("Subtotal: %.2f\n", subtotal);

    descuento = subtotal * 0.10;

    printf("Descuento: %.2f\n", descuento);

    total = subtotal - descuento;

    printf("Total: %.2f\n", total);


}