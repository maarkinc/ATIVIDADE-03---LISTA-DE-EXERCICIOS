//MVC-57

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-57 - A Central do Brinquedo Eletrônico        *");
printf("\n**************************************************************");


char cor[20]; 

printf("\nDigite uma COR:  ");
scanf("%s",cor); 

if(strcmp(cor,"verde")==0) 
printf("Vamos brincar la fora!"); 

else if(strcmp(cor,"amarelo")==0) 
printf("Estou ficando com soninho..."); 

else if(strcmp(cor,"vermelho")==0) 
printf("Estou com fome, hora do lanche!"); 

else 
printf("Cor desconhecida");

return 0;
}
