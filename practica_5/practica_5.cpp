#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int i, sum=0, num=0;
	float n; 
	
	printf("\n Ingresa un numero diferente de 0 o un negativo para terminar: ");
	scanf("%d", &i);
	while(i>=0)
	{
		sum=sum+i;
		num++;
		printf("\n Ingresa un numero diferente de 0 o negativoooo para terminar: ");
	    scanf("%d", &i);
	}
	n= sum/num;
	printf("El promedio es %.2f", n);
	system("pause");
	return 0;
}
