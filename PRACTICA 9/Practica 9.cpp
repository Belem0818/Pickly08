#include<stdio.h>
#include<stdlib.h>

int i, j, fec;
char nom, apep, apem, nome, nomc, gen;
char datos[100][10][31];

int main()
{
	for(i=0; i<2;i++)
	{
		for(j=0; j<8; j++)
		{
		printf("\n Escribe el nombre: ");_flushall();
		scanf("%c", &nom);
		j=j+1;
		printf("\n Escribe el apellido paterno: ");_flushall();
		scanf("%c", &apep);
		printf("\n Escribe el apellido materno: ");_flushall();
		scanf("%c", &apem);
		printf("\n Escriba su fecha de nacimiento: ");_flushall();
		scanf("%c", &fec);
		j=j+1;
		printf("\n Escribe el nombre de la escuela: ");_flushall();
		scanf("%c", &nome);
		j=j+1;
		printf("\n Escribe el nombre de la carrera: ");_flushall();
		scanf("%c", &nomc);
		j=j+1;
		printf("\n ?Escribe si eres hombre o mujer?: ");_flushall();
		scanf("%c", &gen);
		j=j+1;
		i=i+1;
		}
	}
	for(i=0; i<2; i++)
	{
		printf("\n El nombre del alumno %d es: %s\n", i+1, nom);
		printf("\n Su apellido paterno es: %c\n", apep);
		printf("\n Su apellido materno es: %c\n", apem);
		printf("\n La fecha de nacimiento del estudiante es: %d\n", fec);
		printf("\n El nombre de la escuela del estudiante es: %c\n", nome);
		printf("\n El nombre de la carrera del estudiante es: %c\n", nomc);
		printf("\n El genero del estudiante es: %c\n", gen);
		i=i+1;
	}
	
	system("pause");	
	return 0;

}
