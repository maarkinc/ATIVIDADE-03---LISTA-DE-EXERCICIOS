//MVC-38

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-38 -Senha correta                             *");
printf("\n**************************************************************");

int senha; 

while(senha!=1234){ 
printf("\nSenha: "); 
scanf("%d",&senha);} 
printf("Acesso liberado");

return 0;
}
