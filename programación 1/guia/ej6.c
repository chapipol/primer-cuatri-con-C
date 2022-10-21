#include<stdio.h>
/*Hacer el algoritmo que nos permita introducir un numero por teclado y nos informe si
es positivo o negativo.*/
int main() {

    int num=0;

        printf("Ingrese un numero: \n");
        scanf("%i", &num);


        if(num < 0) {
            printf("El numero es negativo.\n");

        } else if (num > 0) {
            printf("El numero es positivo.\n");

        } else (num = 0); {
            printf("El numero es 0\n");
            num = 1;
        }

}