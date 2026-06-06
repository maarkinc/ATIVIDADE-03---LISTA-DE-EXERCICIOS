//MVC-34

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-34 - Verificar se um número é primo           *");
printf("\n**************************************************************");

int n,i;
int primo=1; 

printf("\nNumero: "); 
scanf("%d",&n); 

for(i=2;i<n;i++) 
if(n%i==0) primo=0; 
if(primo) 

printf("Primo"); 

else 
printf("Nao primo");

return 0;
}
