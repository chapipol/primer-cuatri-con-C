#include<stdio.h>
/*Escribir en Pseudocodigo y codificar en C un programa que lea 20 caracteres. Luego de
la lectura indicar cuantas “a” se ingresaron, cuantas “e, i, o, u” */
int main () {

    char caracter;
    int aux, a=0, e=0, i=0, o=0, u=0;

    printf("Ingrese 20 caracteres: \n\n");

    for(aux=0; aux!=20; aux++){

        caracter = getchar();

        if(caracter=='a'){
            a = a +1;
        }
        if(caracter=='e'){
            e = e +1;
        }
        if(caracter=='i'){
            i = i +1;
        }
        if(caracter=='o'){
            o = o +1;
        }
        if(caracter=='u'){
            u = u +1;
        }
    }

    printf("\na: %d veces \n", a);
    printf("e: %d veces \n", e);
    printf("i: %d veces \n", i);
    printf("o: %d veces \n", o);
    printf("u: %d veces \n", u);

}