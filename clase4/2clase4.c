#include<stdio.h>



int main(){

    int n1, n2, n3, prom, i=0;

    while(i!=2){


        printf("\n~~~~~~~ Calcule su promedio entre 3 notas ~~~~~~~~\n\n");
        printf("Eliga una opcion: \n\n");
        printf("1. Calcular promedio\n");
        printf("2. Finalizar programa\n\n");
        scanf("%i", &i);

        if ( i == 1) {
            do {
                printf("Ingrese sus notas: \n");
                scanf("%i %i %i", &n1, &n2, &n3);
            }
            while (n1 < 1 || n1 > 10 || n2 < 1 || n2 > 10 || n3 < 1 || n3 > 10);
            prom = (n1 + n2 + n3) / 3;
            printf("Su promedio es: %i \n", prom);
        } else {
			printf("Se ha finalizado el programa.\n");
        }

}
}