#include<stdio.h>

/*Diseñar en Pseudocodigo y codificar en C un algoritmo que permita ingresar 10
números, ninguno de ellos igual a cero. Se pide sumar los positivos, obtener el
producto de los negativos y luego mostrar ambos resultados. */


int negativo(int num), positivo(int num);


int main() {

    int i=0, j=0, k=0, n1=0, suma=0, multi=1;
    int pos [10];
	int neg [10];
    
    for (i=0;i<10;i++)
    {
    	pos [i] = 0;
    	neg [i] = 1;
	}


	for (i=0;i<10;i++)
	{
		printf("\nIngrese un numero: ");
		scanf("%i", &n1);
		
		if(n1>0)
		{
			pos[i] = n1;	
		}
		if(n1<0)
		{
			neg[i] = n1;    
		}
		if (n1==0)
		{
            printf("Ingrese un numero negativo o positivo, no 0\n");
            i--;     
        }
	}
    
	for (j=0;j<10;j++)
	{
        suma = suma + pos[j];
    }

    for (k=0;k<10;k++)
	{
        multi = multi * neg[k];
    }

    printf("\nLa suma de todos los positivos es: %i\n", suma);
    printf("\nEl producto de todos los negativos es: %i\n", multi);
}
