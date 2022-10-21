#include<stdio.h>
/*Escribir en Pseudocodigo y codificar en C un programa que muestre los múltiplos de 2
y de 3 y de ambos comprendidos entre 0 y 100.*/
int main () {

    int i=0;

    printf("\nDel 0 al 100:\n");
    printf("\nMultiplos de 2:\n");
    for( i=1; i <=100; i++){
        if(i % 2 == 0){
            printf("%i-", i);
        }
    }
    printf("\n\nMultiplos de 3:\n");
    for( i=1; i <=100; i++){
        if( i % 3 == 0) {
            printf("%i-", i);
        }
    }
    printf("\n\n");
}