//MVC-51

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-51 - Contagem regressiva de 10 até            *");
printf("\n**************************************************************");


int i=10; 

do{ 

printf("\n%d",i); 
i--; 
}

while(i>=1);

return 0;
}
