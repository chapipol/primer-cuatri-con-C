#include <stdio.h>

int main () {

    int precio;
    int cantidad;
    float total;

    printf("Ingrese el precio: ");
    scanf("%i", &precio);

    printf("Ingrese cantidad de alfajores ");
    scanf("%i", &cantidad);

    total = cantidad * precio;

    printf("Total %.2f\n", total);


}