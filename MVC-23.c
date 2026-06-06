//MVC-23

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-23 - Maior de dois números                    *");
printf("\n**************************************************************");

int a,b;

printf("\nDigite o primeiro numero: ");
scanf("%d",&a);

printf("\nDigite o segundo numero: ");
scanf("%d",&b);

if(a>b)
 printf("Maior: %d",a);
 
else

 printf("Maior: %d",b);
 
return 0;
}
