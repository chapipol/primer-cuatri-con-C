#include<stdio.h>
/*7. Calcular y visualizar la suma y el producto de los números pares comprendidos entre 20 y
400 (ambos inclusive).*/

int main () {

    int i, j=0, k, n=0, s1=0, s2=0, suma=0, producto, suma_total=0, producto_total=1;
    int pares [191];

        // Guarda los pares
        for(i = 20; i <= 400; i++)
        {
            if( i % 2 == 0)
            {
                pares[n] = i;
                n++;
            }
        }
        	n=0;
        	k=1;
        	
                for (j=0; j <= 95; j++)
                {
                    printf("\n%i + ", pares[n]);
                    s1 = pares[n];
					n++;
					n++;
                    printf("%i = ", pares[k]);
                    s2 = pares[k];
                    k++;
                    k++;
                    suma = s1 + s2;
                    printf("%i", suma);
    				suma_total = suma_total + suma;
                }
				
				printf("\n\n______________________La suma total de todas las sumas es: %i\n", suma_total);
			
			n=0;
        	k=1;
                do
                {
                    printf("\n%i x ", pares[n]);
                    s1 = pares[n];
					n++;
					n++;
                    printf("%i = ", pares[k]);
                    s2 = pares[k];
                    k++;
                    k++;
                    producto = s1 * s2;
                    printf("%i", producto);
                    // Aca como es muy grande el numero, no da la memoria y empieza a irse muy lejos
    				producto_total = producto_total * producto;				
                }while(n>1 && n<=189);
                
                producto_total = producto_total * 400;
					
                printf("\n\n______________________El producto total es: %i\n", producto_total);
				
return 0;
}
