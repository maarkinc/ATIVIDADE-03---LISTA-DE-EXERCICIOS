//MVC-28

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-28 - Soma dos 100 primeiros números naturais  *");
printf("\n**************************************************************");

int soma=0;
int i;

for(i=1;i<=100;i++)
soma+=i; 
printf("\nSoma = %d",soma);

return 0;

}
