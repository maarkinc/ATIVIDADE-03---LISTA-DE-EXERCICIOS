//MVC-59

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-59 - O Assistente de Direção (GPS Sem Mapa)   *");
printf("\n**************************************************************\n");


char d; 

printf("\nDigite uma letra (N, S, L ou O):  ");
scanf("%c",&d); 

switch(d){ 

case 'N': 
printf("Seguir para o Norte"); 
break; 

case 'S': 
printf("Seguir para o Sul"); 
break; 

case 'L': 
printf("Virar a Leste"); 
break; 

case 'O': 
printf("Virar a Oeste"); 
break; 

default: 
printf("Comando invalido"); 

}

return 0;
}
