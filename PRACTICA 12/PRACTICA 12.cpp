#include<stdio.h>
#include<stdlib.h>

int i,n; int cap(int f); int imp(int w); int arc(int y);
struct dato
{
int fec['n'];    
char nom['n'], apep['n'], apem['n'], nome['n'], nomc['n'], gen['n'];
}x[100];
int main()
{
	printf("\n Ingrese el numero personas a registrar: ");
	scanf("%d",&n);
	cap(n);
    imp(n);
    arc(n);
	return 0;
}

int cap(int f)
{
	for(i=0; i<n;i++)
	{   printf("\n alumno %d",i+1);
		printf("\n Escribe el nombre: ");
		scanf("%s",&x[i].nom);
		printf("\n Escribe el apellido paterno: ");_flushall();
		scanf("%s",&x[i].apep);
		printf("\n Escribe el apellido materno: ");_flushall();
		scanf("%s",&x[i].apem);
		printf("\n Escriba su fecha de nacimiento: ");_flushall();
		scanf("%d",&x[i].fec);
		printf("\n Escribe el nombre de la escuela: ");_flushall();
		scanf("%s",&x[i].nome);
		printf("\n Escribe el nombre de la carrera: ");_flushall();
		scanf("%s",&x[i].nomc);
		printf("\n ¿Escribe  eres hombre o mujer?: ");_flushall();
		scanf("%s",&x[i].gen);
		printf("\n\n");
}	
}

int imp(int w)
{
		for(i=0; i<n; i++)
	{
		printf("\n\n");
		printf("\n El nombre del alumno %d es: %s", i+1,x[i].nom);
		printf("\n Su apellido paterno es: %s",x[i].apep);
		printf("\n Su apellido materno es: %s",x[i].apem);
		printf("\n La fecha de nacimiento del estudiante es: %d ",x[i].fec);
		printf("\n El nombre de la escuela del estudiante es: %s",x[i].nome);
		printf("\n El nombre de la carrera del estudiante es: %s",x[i].nomc);
		printf("\n El genero del estudiante es: %s",x[i].gen);
	   system("pause");
	}
}

int arc(int y)
{
	FILE*FP;
	FP=fopen("Lista.bin","wb");
		for(i=0; i<n; i++)
	{
    fwrite(&x[i],sizeof(struct dato), 1, FP);
    fclose(FP);
	}
}

