//MVC-58

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-58 - A Calculadora de Bolso de 4 Operações    *");
printf("\n**************************************************************");


float a,b; 
char op; 

printf("\nDigite dois numeros REAIS: ");
scanf("%f %c %f",&a,&op,&b); 


switch(op){ 
case '+': 
printf("%.2f",a+b); 

break; 
case '-': 
printf("%.2f",a-b); 

break; 
case '*': 
printf("%.2f",a*b); 

break; 
case '/': 
printf("%.2f",a/b); 

break; 
default: 
printf("Operacao nao reconhecida"); 

}
return 0;
}
