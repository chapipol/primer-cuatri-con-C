#include <stdio.h>

int main()
{

    int cantidad;
    float total;
    float descuento;
    float subtotal;

    printf("\n   ---------------------------------------\n");
    printf("        ***BIENVENIDO AL MAXIKIOSCO***\n");
    printf("/// El precio de los alfajores es de 150.50 ///\n\n");
    printf("Ingrese la cantidad que desea comprar: ");
    scanf("%i", &cantidad);
    printf("\n");


    if(cantidad >= 300)
    {
        printf("¡Al llevar %i unidades ud. recibió un descuento del 30%%! \n\n", cantidad);

        total = cantidad * 150.50;
        printf("Total: %.2f\n", total);

        descuento = total * 0.30;
        printf("Descuento: %.2f\n", descuento);

        subtotal = total - descuento;
        printf("Subtotal: %.2f\n", subtotal);

        printf("---------------------------------------\n");



    }else if (cantidad <= 300){

        total = cantidad * 150.50;
        printf("Total: %.2f\n", total);
    }


    return 0;
}