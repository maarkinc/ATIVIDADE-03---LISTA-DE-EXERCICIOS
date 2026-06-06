//MVC-35

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-35 - Números de Fibonacci (n termos)          *");
printf("\n**************************************************************");


int i,n,c;
int a=0;
int b=1;

printf("\nTermos: "); 
scanf("%d",&n); 

for(i=0;i<n;i++){ 
printf("%d ",a); 
c=a+b; 
a=b; 
b=c;
}

return 0;
}
