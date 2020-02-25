#include<stdio.h>

int main()
{
	char c;
	printf("\n Ingresa tu caracter: ");
	c=getchar();
	int a = (int) c;
	if (48 <= a && a <= 57)
	printf("\n Numero ingresado: ");
	else
		if(65 <= a && a <= 90 )
		 printf("\n Caracter alfabetico mayor");
		
		else
		 if(97 <= a && a <= 122)
		 printf("\n Simbolo ingresado");
	putchar(c);
	printf("\n");
	return 0;
}
	
