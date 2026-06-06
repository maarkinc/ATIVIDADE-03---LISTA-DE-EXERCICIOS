//MVC-55

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n***********************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073                   *");
printf("\n* PROGRAMA MVC-55 - Ler números e mostrar o maior até digitar negativo*");
printf("\n***********************************************************************");

int n; 
int maior=0; 

do{ 
printf("\nDigite um numero: ");
scanf("%d",&n); 

if(n>maior) 
maior=n; 

}
while(n>=0); 
printf("Maior=%d",maior);

return 0;
}
