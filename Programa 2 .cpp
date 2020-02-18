#include<stdio.h>
#include <stdlib.h>


int main()
{
	int N1, N2, S, M, R, DE, MOD;
	float DR;
	bool A, B;
	printf("Escribe el primer numero");
	scanf("%d", &N1);
	printf("Escribe el segundo numero");
	scanf("%d",&N2);
	S=N1+N2;
	printf("\n La suma es %d",S);
	M=N1*N2;
	printf("\n La multiplicacion es %d",M);
	DE=N1/N2;
	printf("\n La division entera es %d",DE);
	DR=N1/N2;
	printf("\n La division real es %2f",DR);
	MOD=N1%N2;
	printf("\n El modulo es %d", MOD);
	if(A=N1<N2);
	printf("\n Lo que ingresaste en A es %d", A);
	if(B=N1>N2);
	printf("\n Lo que esta en B es %d", B);
	
	system("pause");
	return 0;
}
