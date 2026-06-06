//MVC-29

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-29 - Números pares de 0 a 50                  *");
printf("\n**************************************************************");

int i;

for(i=0;i<=50;i+=2) 
printf("\n%d",i);

return 0;
}
