#include<stdio.h>
#include<stdlib.h>

int i; int cap(int x); int imp(int w);
int fec['n'];    char nom['n']['n'], apep['n']['n'], apem['n']['n'], nome['n']['n'], nomc['n']['n'], gen['n']['n'];

int main()
{
	cap(i);
    imp(i);
	return 0;
}

int cap(int x)
{
	for(i=0; i<2;i++)
	{   printf("\n alumno %d",i+1);
		printf("\n Escribe el nombre: ");_flushall();
		scanf("%s", &nom[i]);
		printf("\n Escribe el apellido paterno: ");_flushall();
		scanf("%s", &apep[i]);
		printf("\n Escribe el apellido materno: ");_flushall();
		scanf("%s", &apem[i]);
		printf("\n Escriba su fecha de nacimiento: ");_flushall();
		scanf("%d", &fec[i]);
		printf("\n Escribe el nombre de la escuela: ");_flushall();
		scanf("%s", &nome[i]);
		printf("\n Escribe el nombre de la carrera: ");_flushall();
		scanf("%s", &nomc[i]);
		printf("\n ?Escribe  eres hombre o mujer?: ");_flushall();
		scanf("%s", &gen[i]);
		printf("\n\n");
	}
	
	
}
int imp(int w)
{
		for(i=0; i<2; i++)
	{
		printf("\n El nombre del alumno %d es: %s\n", i+1, nom[i]);
		printf("\n Su apellido paterno es: %s\n", apep[i]);
		printf("\n Su apellido materno es: %s\n", apep[i]);
		printf("\n La fecha de nacimiento del estudiante es: %d \n",fec[i]);
		printf("\n El nombre de la escuela del estudiante es: %s\n", nome[i]);
		printf("\n El nombre de la carrera del estudiante es: %s\n", nomc[i]);
		printf("\n El genero del estudiante es: %s\n", gen[i]);

	}
	
	   system("pause");	
	   return 0;
	
}
