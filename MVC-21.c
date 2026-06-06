//MVC-21

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-21 - Número positivo ou negativo              *");
printf("\n**************************************************************");

float n;

printf("\nDigite um numero: ");
scanf("%f",&n);

if(n>0)
 printf("Positivo");
 
else if(n<0)
 printf("Negativo");
 
else
 printf("Zero");
 
return 0;
}
