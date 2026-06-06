//MVC-40

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-40 - Tabuada com while                        *");
printf("\n**************************************************************");


int n;
int i=1; 

printf("\nNumero: "); 
scanf("%d",&n); 

while(i<=10){ 
printf("%d x %d = %d\n",n,i,n*i); 
i++; 
}

return 0;
}
