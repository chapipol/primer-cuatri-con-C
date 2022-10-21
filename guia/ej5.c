#include<stdio.h>
/*Diseñar un algoritmo que calcule la superficie de un triángulo a partir del ingreso de su
base y altura y muestre el resultado*/
int main () {


    float sup, base, altura;

    printf("Ingrese la base: \n");
    scanf("%f", &base);
    printf("Ingrese altura: \n");
    scanf("%f", &altura);

    sup = (base * altura) / 2;

    printf("El la superficie del triangulo es: %2.f\n", sup);


}