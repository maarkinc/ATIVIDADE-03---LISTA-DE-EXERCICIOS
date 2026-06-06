//MVC-56

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-56 - O Menu do Fast-Food Digital              *");
printf("\n**************************************************************\n");

int op; 

printf("\nCombo 1: Hamburguer + Batata + Refri - R$30");
printf("\nCombo 2: Pizza Brotinho + Refri - R$25");
printf("\nCombo 3: Salada + Suco - R$22");
printf("\nCombo 4: Balde de Frango - R$35\n");

printf("\nDigite o numero do seu combo:  ");
scanf("%d",&op);

switch(op){ 

case 1: 
printf("\nCombo Hamburguer + Batata + Refri - R$30"); 

break; 
case 2: 
printf("\nCombo Pizza Brotinho + Refri - R$25"); 

break; 
case 3: 
printf("\nCombo Salada + Suco - R$22");
 
break; 
case 4: 
printf("\nCombo Balde de Frango - R$35"); 

break; 
default: 
printf("Opcao invalida");



return 0;
}

}
