//MVC-20

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-20 - Ano bissexto                             *");
printf("\n**************************************************************");

int ano;

printf("\nDigite o ano: ");
scanf("%d",&ano);

if(ano%4==0 && ano%100!=0 || ano%400==0)
 printf("Ano bissexto");
 
else
 printf("Nao e bissexto");
 
return 0;
}
