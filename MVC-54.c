//MVC-54

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-54 - Validar número entre 1 e 5               *");
printf("\n**************************************************************"); 

int n; 

do{ 
printf("\nNumero entre 1 e 5: "); 
scanf("%d",&n); 

}
while(n<1 || n>5);

return 0;
}
