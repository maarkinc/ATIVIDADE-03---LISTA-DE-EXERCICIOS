//MVC-47

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-47 - Tabuada de um número                     *");
printf("\n**************************************************************");

int n;
int i=1;

printf("\nDigite um numero:  ");
scanf("%d",&n);
 
do{ 
printf("%d x %d = %d\n",n,i,n*i); 
i++; 

}
while(i<=10);

return 0;
}
