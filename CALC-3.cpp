#include<conio.h>
#include<stdio.h>
#include<math.h>

main() 
{
char opcion;
float x,y;

 printf("programa con el menú para una calculadora \n");
 printf("seleccione una opcion \n");
 printf("A:SUMA \nB:RESTA \nC:MULTIPLICACION \nD:DIVICION \nE:POTENCIA \nF:RAIZ CUADRADA\n");
 scanf("%C",&opcion);
 
 switch(opcion)
{
	case 'A':
	printf("SUMA\n");
	printf("introduzca 2 numeros\n");
	scanf("%f %f", &x, &y);
	printf("el resultado de la suma es: %f", x+y);
	break;
	
	case 'B':
	printf("RESTA\n");
	printf("introduzca 2 numeros (el minuendo seguido del sustraendo)\n");
	scanf("%f %f", &x, &y);
	printf("el resultado de la resta es: %f", x-y);
	break;
	
	case 'C':
	printf("MULTIPLICACION\n");
	printf("introduzca 2 numeros\n");
	scanf("%f %f", &x, &y);
	printf("el resultado de la multiplicacion es: %f", x*y);
	break;
	
	case 'D':
	printf("DIVICION\n");
	printf("introduzca 2 numeros (el dividendo seguido del divisor)\n");
	scanf("%f %f", &x, &y);
	if(y)
		printf("el resultado de la divicion es: %f", x/y);
	else 
		printf("no se puede dividir entre 0");
	break;
	
	case 'E':
	printf("POTENCIA\n");
	printf("introduzca 2 numeros (el numero seguido del exponente)\n");
	scanf("%f %f", &x, &y);
	printf("el resultado de la potencia es: %f", pow(x,y));
	break;
	
	case 'F':
	printf("RAIZ CUADRADA\n");
	printf("introduzca el radicando\n");
	scanf("%f", &x);
	if(x>0)
		printf("el resultado de la raiz es: %f", pow(x,0.5));
	else 
		printf("el radicando deve ser mayor que 0");
	break;
	
	default:
		printf("opcion incorrecta");
}
}
 
 
 
