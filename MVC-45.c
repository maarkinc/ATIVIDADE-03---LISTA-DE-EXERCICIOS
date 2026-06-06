//MVC-45

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-45 - Menu até escolher sair                   *");
printf("\n**************************************************************");

int op=0; 

while(op!=3){ 
printf("\n1-Deposito \n2-Saque \n3-Sair \n"); 
scanf("%d",&op);

}

return 0;
}
