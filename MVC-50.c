//MVC-50

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-50 - Número positivo obrigatório              *");
printf("\n**************************************************************");


int n; 

do{ 
printf("\nDigite positivo: "); 
scanf("%d",&n); 

}
while(n<=0);

return 0;
}
