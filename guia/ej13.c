#include<stdio.h>
/*Hacer el algoritmo que imprima los números pares entre el 1 y el 100.*/

int main () {

    int i;

    for(i = 1; i <= 100; i++){
        if ( i % 2 == 0){
            printf("%i\n", i);
        }
    }
}