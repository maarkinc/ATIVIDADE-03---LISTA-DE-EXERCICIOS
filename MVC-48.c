//MVC-48

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-48 - Menu com opção de sair                   *");
printf("\n**************************************************************");


int op; 

do{ 
printf("\n1-Mensagem \n2-Sair \n"); 
scanf("%d",&op); 

if(op==1) 
printf("Voce escolheu a mensagem!\n"); 

}
while(op!=2);

return 0;
}
