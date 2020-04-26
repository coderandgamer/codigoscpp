#include<conio.h>
#include<stdio.h>
main(){
	int opcion;
	float base, altura, rad;
	printf("seleccione una opcion:\n");
	printf(" 1:calcula el area de un rectangulo\n 2:calcula el area de un triangulo\n 3:calcula el area de un circulo\n ");
	scanf("%d", &opcion);
	
	if(opcion==1){
		printf("calcular el area de un rectangulo:\n ingrese en orden la el valor de los 2 lados diferentes:\n ");
		scanf("%f %f",&base, &altura);
		printf("el area es: %f", base*altura);
	}
	else if (opcion==2)
	{printf("calcular el area de un triangulo:\n ingrese en orden la el valor de la base y la altura:\n ");
	scanf("%f %f",&base, &altura);
		printf("el area es: %f", (base*altura)*.5);
	}
	else if (opcion==3)
	{printf("calcular el area de un circulo:\n ingrese en orden la el valor de el radio:\n ");
	scanf("%f",&rad);
		printf("el area es: %f", 3.14159264*(rad*rad));}
		else
		printf("opcion incorrecta");
}
