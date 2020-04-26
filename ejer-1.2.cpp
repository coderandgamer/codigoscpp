//PROGRAMA QUE SUSTITUYE EL TABULADOR POR ->
//Y EL BACKSPACE POR <-
//CON swich
#include <stdio.h>
#include <conio.h>
main ()
{
int a;
//clrscr();
printf("REFLEJO LO QUE ESCRIBA SU TECLADO, EL TABULADOR \n");
printf("LO SUSTITUYO POR -> Y EL BACKSPACE POR <- \n");
printf("PARA TENER UNA NUEVA LINEA PULSE x \n");
printf("PARA TERMINAR PULSE w \n");
while ((a=getch())!='w')
{

switch(a)
{
	case '\t':
		printf("\t->");
		break;
	
	case '\b':
		printf("<-");
		break;
		
	case 'x':
		printf("\n");		
		break;
		
	default:
		putch(a);
}
/*if (a=='\t')
printf("\t->");
else if (a=='\b')
printf("<-");
else if (a=='x')
printf("\n");
else putch (a); */
}
}
