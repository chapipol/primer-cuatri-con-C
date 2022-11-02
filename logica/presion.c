#include<stdio.h>



int main (){

    float pres, vol, temp, masa, suma;
    int n=0, i=0;

    do{
            printf("Ingrese presion: \n");
        scanf("%f", &pres);
                printf("Ingrese volumen: \n");
        scanf("%f", &vol);
                printf("Ingrese temperatura: \n");
        scanf("%f", &temp);

        n++;

        masa =(pres* vol) / (0.37 * (temp + 460));

        printf("La masa de aire del vehiculo %i es %.2f", n, masa);

        printf("\n\nDesea continuar? \nPresione 1 - otro numero para SALIR\n");
        scanf("%i", &i);

    }while (i==1);    

}
