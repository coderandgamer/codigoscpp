//Sanchez Rios Marco Antonio ejercicio 2 metros a pies

#include<stdio.h>
#include<conio.h>

main(){
	int x;
	printf("\t\t   tabla de metros a pies el 1 al 10\n");
	printf("Metros \t\t Pies\n");
	while(x<=10){
		printf("%d \t\t %3.2f\n",x,x*3.28);
		x++;
	}
}
