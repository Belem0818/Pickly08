#include<stdio.h>
#include<stdlib.h>

int i=0, N=0, A[3][4], j=0, NUM;

int main()
{
	for (i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("\n Ingrese el dijito %d de la matriz: ", N+1);
			scanf("%d", &A[i][j]);
			N=N+1;
		}
	}
	printf("\n Ingrese el numero para multiplicar la matriz: ");
	scanf("%d", &NUM);
	printf("\n La matriz entrada es: \n");
	for (i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d \t", A[i][j]);
		}
		printf("\n");
	}
	printf("\n La matriz producto es: \n ");
	for (i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			A[i][j]=A[i][j]*NUM;
			printf("%d \t", A[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;

}
