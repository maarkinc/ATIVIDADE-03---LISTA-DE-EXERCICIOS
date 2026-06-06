//MVC-53

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-53 - Confirmar saída com 's'                  *");
printf("\n**************************************************************");


char op; 

do{
printf("\nDeseja sair?: "); 
scanf("%c",&op); 

}
while(op!='s');

return 0;
}
