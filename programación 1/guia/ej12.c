#include<stdio.h>
/* Escribir en Pseudocodigo y codificar en C un programa que muestre los números
impares entre 0 y 100 y que imprima cuantos impares hay*/

int main() {

    int cant, i;

    for( i = 1; i <= 100; i++){

    if ( i % 2 == !0){
            printf("%i\n", i);
            cant = cant + 1;
        }
    }
    printf("Cantidad de impares: %i\n", cant);
}