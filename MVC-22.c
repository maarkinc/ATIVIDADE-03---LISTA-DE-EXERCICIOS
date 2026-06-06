//MVC-22

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-22 - Par ou ímpar                             *");
printf("\n**************************************************************");

int n;
printf("\nDigite um numero: ");
scanf("%d",&n);

if(n%2==0)
 printf("Par");
 
else
 printf("Impar");
 
return 0;
}
