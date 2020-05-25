#include<stdio.h>
#include<stdlib.h>

int i;
struct
{
int fec['n'];    char nom['n'], apep['n'], apem['n'], nome['n'], nomc['n'], gen['n'];
}
datos['n'];

int main()
{
	for(i=0; i<2; i++)
	{   printf("\n alumno %d",i+1);
		printf("\n Escribe el nombre: ");_flushall();
		scanf("%c", &datos[i].nom);
		printf("\n Escribe el apellido paterno: ");_flushall();
		scanf("%c", &datos[i].apep);
		printf("\n Escribe el apellido materno: ");_flushall();
		scanf("%c", &datos[i].apem);
		printf("\n Escriba su fecha de nacimiento: ");_flushall();
		scanf("%d", &datos[i].fec[i]);
		printf("\n Escribe el nombre de la escuela: ");_flushall();
		scanf("%c", &datos[i].nome);
		printf("\n Escribe el nombre de la carrera: ");_flushall();
		scanf("%c", &datos[i].nomc);
		printf("\n ?Escribe  eres hombre o mujer?: ");_flushall();
		scanf("%c", &datos[i].gen);
		
	}
	for(i=0; i<2 ; i++)
	{
		printf("\n El nombre del alumno %d es: %s\n", i+1, datos[i].nom);
		printf("\n Su apellido paterno es: %s\n", datos[i].apep);
		printf("\n Su apellido materno es: %s\n", datos[i].apep);
		printf("\n La fecha de nacimiento del estudiante es: %d \n", datos[i].fec[i]);
		printf("\n El nombre de la escuela del estudiante es: %s\n", datos[i].nome);
		printf("\n El nombre de la carrera del estudiante es: %s\n", datos[i].nomc);
		printf("\n El genero del estudiante es: %s\n", datos[i].gen);
	   system("pause");
	}
	
	system("pause");
	return 0;
}
