#include <stdio.h>



int main()
{
    int numpos;


    printf("Ingrese un numero positivo: \n");
    scanf("%i", &numpos);

    int i;

    for( i = 1; i <= numpos; i++){
        if ( i % 2 == 0){
            printf("%i\n", i);
        }
    }









}