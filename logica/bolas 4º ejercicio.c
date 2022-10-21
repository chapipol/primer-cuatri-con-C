#include<stdio.h>

int main() {

    int i=0, j=0;

    while(i!=3) {
        do{
            printf("\nEliga una opcion: \n\n");
            printf("1. Si  la tienda esta abierta \n\n");
            printf("2. Si  la tienda esta cerrada \n\n");
            printf("3. Para finalizar el programna \n\n");
            scanf("%i", &i);
        }while ( i < 1 || i > 3);

    while(i==1){
        printf("\n¿Que color te tocó?\n\n");
        printf("1. Si es ROJO.\n");
        printf("2. Si es AMARILLO.\n");
        printf("3. Si es BLANCO.\n");
        scanf("%i", &j);

        if(j==1){
            printf("Obtuvo un descuento del 40%% \n\n");
            i = 2;
        } else if (j==2) {
            printf("Obtuvo un descuento del 25%% \n\n");
            i = 2;
        } else if (j==3) {
            printf("\nNo hay descuentos con la bola blanca \n\n");
            i = 2;
        }
    }
}
    printf("\n ADIOS!\n");
}
