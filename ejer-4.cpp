//Sanchez Rios Marco Antonio ejercicio 4 tabla pulgadas a centimetros

#include<stdio.h>
#include<conio.h>

main(){
	int x,y;
	printf("\t\t   tabla de Pulgadas a centimeros\n");
	printf("No de conversion \t\t PULGADAS \t\t CENTIMETROS\n");
	for(x=1, y=0;x<=10;x++, y=y+5){
		printf("%d \t\t \t\t  %d \t\t \t %3.2f\n",x,y,y*2.54);
	}

}
