//MVC-30

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-30 -  Fatorial de um número                   *");
printf("\n**************************************************************");


int n,i;
int f=1;

printf("\nNumero: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
f*=i;
printf("Fatorial = %d",f);

return 0;
}
