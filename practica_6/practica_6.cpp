#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int i, sum=0, num=0;
	float n;
	
	printf("\n Ingresa un numero diferente de 0 o un negativo para terminar: ");
	scanf("%d", &i);
	do 
	{
		printf("\n Ingresa un numero diferente de 0 o negativoooo para terminar: ");
	    scanf("%d", &i);
	    sum=sum+i;
		num++;
	}
	while(i>=0);
	n= sum/num;
	printf("El promedio es %.2f", n);
	system("pause");
	return 0;
}
