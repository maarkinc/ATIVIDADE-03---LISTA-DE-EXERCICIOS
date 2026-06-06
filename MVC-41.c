//MVC-41

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-41 - Número primo com while                   *");
printf("\n**************************************************************");

int n; 
int i=2;
int primo=1; 

printf("\nDigite numero: ");
scanf("%d",&n); 

while(i<n){ 
if(n%i==0) 
primo=0; 
i++; 

} 
if(primo) 
printf("Primo"); 

else 
printf("Nao primo");

return 0;
}
