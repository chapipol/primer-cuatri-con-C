#include<stdio.h>
/*Escribir el algoritmo que permita leer un numero decimal que representa una cantidad
de grados Celsius y convierta dicho valor a la cantidad equivalente en grados
Fahrenheit. La salida del programa puede ser de la siguiente forma: 100 grados Celsius
son 212 grados Fahrenheit. */
int main() {

    float f, c;

        printf("Ingrese grados °C: \n");
        scanf("%f", &c);

    f = (c * 1.8) + 32;

        printf("%.3f° Celsius son %.3f° Fahrenheit\n", c, f);

}