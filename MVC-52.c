//MVC-52

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-52 - Soma até o número ser múltiplo de 10     *");
printf("\n**************************************************************");


int n;
int soma=0; 

do{ 
printf("\n Digite um numero: ");
scanf("%d",&n); 
soma+=n; 

}
while(n%10!=0); 
printf("Soma=%d",soma);

return 0;
}
