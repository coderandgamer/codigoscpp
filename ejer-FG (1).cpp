//Sanchez Rios Marco Antonio ejercicio 6 programa que resuelve ecuaciones de segundo grado
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
main(){
	int a,b,c ;
	float x1, x2;
	char o;
	printf("\t\t   PROGRAMA QUE RESUELVE ECUACIONES CUADRATICAS APARTIR DE LA CHICHARRONERA\n");
	
	do{
	printf("INTRODUZCA LOS VALORES DE A, B Y C EN SU ORDEN CORRESPONDIENTE\n");
	o='a';
	scanf("%d %d %d",&a,&b,&c);
	x1= (-b+pow(((b*b)-(4*a*c)),0.5))/(2*a);
	x2=	(-b-pow(((b*b)-(4*a*c)),0.5))/(2*a);
	
	if((b*b)-(4*a*c)>=0){
		
		printf("X1:%5.3f \nX2:%5.3f\n",x1,x2);
		printf("¿desea continuar? (pulse cualquer tecla si es que si, pulse \"n\" si es que no)\n");
		o=getch();
		system("cls");
	}
	else{
		printf("solución imaginaria \nintente nuevamente ");
		getch();
		system("cls");
	}
}
	while(o!='n');
	
	
}
