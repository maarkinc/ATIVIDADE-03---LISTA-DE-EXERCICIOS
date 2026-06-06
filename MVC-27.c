//MVC-27

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-27 -  Tabuada de um número                    *");
printf("\n**************************************************************");


int i,n;

 printf("\nNumero: ");
 scanf("%d",&n);
 
for(i=1; i<=10; i++){
printf("%d x %d = %d\n",n,i,n*i);
}

return 0;
}
