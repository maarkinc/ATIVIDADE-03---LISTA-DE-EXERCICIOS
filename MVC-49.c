//MVC-49

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-49 - Pedir senha até acertar                  *");
printf("\n**************************************************************");


int senha; 
do{ 
printf("\nSenha: "); 
scanf("%d",&senha); 
}

while(senha!=1111); 
printf("Acesso liberado!");

return 0;
}
