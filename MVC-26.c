//MVC-26

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-26 - Contar de 1 a 10                         *");
printf("\n**************************************************************");

int i=1;

for(i=1;i<=10;i++)
 printf("\n%d",i);
 
return 0;
}
