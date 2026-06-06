//MVC-46

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-46 - Contar de 1 a 10                         *");
printf("\n**************************************************************");


int i=1; 

do{ 
printf("\n%d\n",i); 
i++; 
}
while(i<=10);

return 0;
}
