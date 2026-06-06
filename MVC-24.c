//MVC-24

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-24 -  Pode votar?                             *");
printf("\n**************************************************************");

int idade;

printf("\n Digite a idade: ");
scanf("%d",&idade);
 
if(idade>=16)
 printf("Pode votar");
 
else

 printf("Nao pode votar");
 
return 0;
}
