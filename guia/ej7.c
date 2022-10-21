#include<stdio.h>
/*Hacer el algoritmo que nos permita introducir un numero por teclado y nos informe si
es par o impar.*/
int main() {


    int num;

        printf("Ingrese un numero: \n");
        scanf("%i", &num);

        num = (num % 2);

        if (num == 0) {
            printf("El numero es par.\n");
        } else if (num == !0) {
            printf("El numero es impar.\n");
        }
}