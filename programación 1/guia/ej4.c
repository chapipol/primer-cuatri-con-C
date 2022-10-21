#include<stdio.h>
/*Diseñar un algoritmo que calcule la longitud de la circunferencia y el área del circulo
de radio dado*/
int main() {


    float PI = 3.141592, radio, area, longcir;

    printf("Ingrese el radio: \n");
    scanf("%f", &radio);

    longcir = 2 * PI * radio;

    printf("La longitud de la circunferencia es: %2.f\n", longcir);

    area = PI * radio * radio;

    printf("El area del circulo es: %2.f\n", area);


}