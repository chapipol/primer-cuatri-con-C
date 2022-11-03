#include<stdio.h>


int main()
{
	int x, y, a, b, c;
	
	
	printf("\ningrese un numero entero para A: ");
	scanf("%i", &a);
		
	printf("\ningrese un numero entero para B: ");
	scanf("%i", &b);
		
	printf("\ningrese un numero entero para C: ");
	scanf("%i", &c);
		
	printf("\ningrese un numero entero para Y: ");
	scanf("%i", &y);
	
	switch(x)
	{
		case 1 : 
				if(y < a && (a<b<c))
				{
					x = 0;
				}
				break;
		case 2 :
				if(a <= y < b)
				{
					x = 1;
				}
				break;
		case 3 :
				if(b <= y < c)
				{
					x = 2;
				}
				break;
		case 4 :
				if(c <= y)
				{
					x = 3;
				}
				break;
		default :
			x = 4;
			break;
	}
	
	printf("\nEl valor de X es : %i", x);
	
	
	
}
