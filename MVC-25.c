//MVC-25

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-25 - Notas e aprovação                        *");
printf("\n**************************************************************");

float media;
printf("\nDigite a media: ");
scanf("%f",&media);

if(media>=7)
 printf("Aprovado");
 
else if(media>=5)
 printf("Recuperacao");
 
else
 printf("Reprovado");
 
return 0;
}
