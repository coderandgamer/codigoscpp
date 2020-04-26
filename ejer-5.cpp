//Sanchez Rios Marco Antonio ejercicio 5 tabla grados farenheiath a celcius
#include<stdio.h>
#include<conio.h>

main(){
	int x,y,f;
	printf("\t\t   tabla de Farenheit a Celcius\n");
	printf("No de conversion\t\tTemperatura °F\t\t incrementos\t\t Temperatura °C\n");
	x=1;
	y=0;
	f=32;
	while(x<=10){
		printf("%d \t\t\t\t%d \t\t\t\t%d   \t\t\%3.2f\n",x,f+y,y,(f+y-32)*0.555555556);
		x++;
		y=y+20;
	}

}
