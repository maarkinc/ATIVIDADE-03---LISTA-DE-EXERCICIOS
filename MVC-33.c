//MVC-33

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-33 - Múltiplos de 3 entre 1 e 30              *");
printf("\n**************************************************************");

int i;

for(i=1;i<=30;i++)
if(i%3==0) 
printf("%d\n",i);

return 0;
}
