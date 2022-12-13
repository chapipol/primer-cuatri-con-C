#include<stdio.h>

/*un programa que muestre los números primos comprendidos entre 0 y 100*/


int esPrimo(int numero);

int main ()
{
    int i=0;

    printf("\nNumeros primos desde 0 al 100:\n");

    for(i=1; i <= 100; i++)
	{
        if( esPrimo(i) )
		{
            printf("%i-", i);
        }
    }
    printf("\n");
}


int esPrimo(int numero)
{
	int i= 0;
	
	if (numero == 0 || numero == 1) return 0;
	if (numero == 4) return 0;
		
	for (i = 2; i < numero / 2; i++) 
	{
   		if (numero % i == 0) return 0;
	}
	
	return 1;
}
