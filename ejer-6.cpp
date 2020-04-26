//Sanchez Rios Marco Antonio ejercicio 6 tabla de sen cos tan
#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int x,y,f;
	printf("\t\t   tabla de sen cos y tan\n");
	printf("Grados\t\tSeno \t\t Coseno\t\t Tangente\n");
	x=0;
	while(x<=60){
		printf("%d\t\t%f\t%f\t%f\n",x,sin(x*0.0174532925),cos(x*0.0174532925),tan(x*0.0174532925));
		x=x+5;
	}

}
