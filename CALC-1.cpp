#include<conio.h>
#include<stdio.h>
#include<math.h>

main() 
{
int opcion;
float x,y;

 printf("programa con el menú para una calculadora \n");
 printf("seleccione una opcion \n");
 printf("1:SUMA \n2:RESTA \n3:MULTIPLICACION \n4:DIVICION \n5:POTENCIA \n6:RAIZ CUADRADA\n");
 scanf("%d",&opcion);
 
 switch(opcion)
{
	case 1:
	printf("SUMA\n");
	printf("introduzca 2 numeros\n");
	scanf("%f %f", &x, &y);
	printf("el resultado de la suma es: %f", x+y);
	break;
	
	case 2:
	printf("RESTA\n");
	printf("introduzca 2 numeros (el minuendo seguido del sustraendo)\n");
	scanf("%f %f", &x, &y);
	printf("el resultado de la resta es: %f", x-y);
	break;
	
	case 3:
	printf("MULTIPLICACION\n");
	printf("introduzca 2 numeros\n");
	scanf("%f %f", &x, &y);
	printf("el resultado de la multiplicacion es: %f", x*y);
	break;
	
	case 4:
	printf("DIVICION\n");
	printf("introduzca 2 numeros (el dividendo seguido del divisor)\n");
	scanf("%f %f", &x, &y);
	if(y)
		printf("el resultado de la divicion es: %f", x/y);
	else 
		printf("no se puede dividir entre 0");
	break;
	
	case 5:
	printf("POTENCIA\n");
	printf("introduzca 2 numeros (el numero seguido del exponente)\n");
	scanf("%f %f", &x, &y);
	printf("el resultado de la potencia es: %f", pow(x,y));
	break;
	
	case 6:
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
