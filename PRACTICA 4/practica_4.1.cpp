#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main ()
{
	char op;
	float num1, num2, Re;
	
	printf("\n Ingresa el primer, el operador y el segundo numero: ");
	scanf("%f %c %f", &num1, &op, &num2);
	switch(op)
	{
		case '+'
		:Re=num1+num2;
		printf("\n El resultado es %.0f", Re);
		break;
		case '-'
		:Re=num1-num2;
		printf("\n El resultado es %.0f", Re);
		break;
		case '*'
		:Re=num1*num2;
		printf("\n El resultado es %.0f", Re);
		break;
		case '/'
		:Re=num1/num2;
		printf("\n El resultado es %.0f", Re);
		break;
		
		default: printf("\n El valor ingresado es incorrecto");
	}
	system("pause");
	return 0;
}
