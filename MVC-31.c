//MVC-31

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-31 - Contagem regressiva                      *");
printf("\n**************************************************************");

int i;

for(i=10;i>=1;i--)
printf("\n%d",i);

return 0;
}
