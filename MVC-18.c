//MVC-18

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-18 - Login simples                            *");
printf("\n**************************************************************");

char usuario[20], senha[20];

printf("\n Usuario: ");
scanf("%s",usuario);

printf("Senha: ");
scanf("%s",senha);

if(strcmp(usuario,"admin")==0 && strcmp(senha,"1234")==0)
 printf("Acesso sucedido");
 
else
 printf("Acesso negado");
 
return 0;
}




