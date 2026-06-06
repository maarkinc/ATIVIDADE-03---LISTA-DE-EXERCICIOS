//MVC-60

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-60 - O Validador de Dias Úteis                *");
printf("\n**************************************************************\n");


int d; 

printf("\nDigite um numero de 1 a 7: ");
scanf("%d",&d); 

switch(d){ 

case 2: 
case 3: 
case 4: 
case 5: 
case 6: 

printf("Dia Útil. Acesso liberado para o trabalho."); 
break; 

case 1: 
case 7: 
printf("Fim de Semana. Prédio fechado."); 
break; 

default: 
printf("Número de dia inválido."); 

}

return 0;
}
