//MVC-36

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-36 - Contar até 10 com while                  *");
printf("\n**************************************************************");


int i=1;

while(i<=10){ 
printf("\n%d",i); 
i++;
}

return 0;
}
