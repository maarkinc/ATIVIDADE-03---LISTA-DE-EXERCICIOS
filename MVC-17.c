//MVC-17

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-17 - O Sensor do Parque Temático              *");
printf("\n**************************************************************");

float altura;

printf("\n Digite a altura: ");
scanf("%f",&altura);

if(altura>=140)
 printf("Liberado");
 
else
 printf("Negado!");
 
return 0;
}
