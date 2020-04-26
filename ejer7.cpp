//Sanchez Rios Marco Antonio ejercicio 7 calculadora de areas de poligonos simples version 3
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main(){
	int opcion;
	float base, altura, rad;
	char o;
	do{
	printf("\t\tCALCULADORA DE AREAS DE POLIGONOS SIMPLES V3\n");
	printf("seleccione una opcion:\n");
	printf(" 1:calcula el area de un rectangulo\n 2:calcula el area de un triangulo\n 3:calcula el area de un circulo\n ");
	scanf("%d", &opcion);
	
	switch(opcion)
		  {
		case 1:
			system("cls");
			printf("calcular el area de un rectangulo:\n ingrese en orden la el valor de los 2 lados diferentes:\n");
			scanf("%f %f",&base, &altura);
			printf("el area es: %3.2f\n", base*altura);
			printf("presione cualquier tecla para volver al menu \npresione s para terminar\n");
			o=getch();
			system("cls");
			
			break;
		case 2:
			system("cls");	
			printf("calcular el area de un triangulo:\n ingrese en orden la el valor de la base y la altura:\n");
			scanf("%f %f",&base, &altura);
			printf("el area es: %3.2f\n", (base*altura)*.5);	
			printf("presione cualquier tecla para volver al menu \npresione s para terminar\n");
			o=getch();
			system("cls");
			break;
		case 3:
			system("cls");
			printf("calcular el area de un circulo:\n ingrese en orden la el valor de el radio:\n");
			scanf("%f",&rad);
			printf("el area es: %3.2f\n", 3.14159264*(rad*rad));
			printf("presione cualquier tecla para volver al menu \npresione s para terminar\n");
			o=getch();
			system("cls");
			break;
		default:
		printf("opcion incorrecta, intente nuevamente\n");
		getch();
		system("cls");
		}
	}
	while(o!='s');	

}
