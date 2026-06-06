//MVC-19

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-19 - Ordem crescente (três números)           *");
printf("\n**************************************************************");

 int num1, num2, num3, aux;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

 
    if (num1 > num2) {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    if (num1 > num3) {
        aux = num1;
        num1 = num3;
        num3 = aux;
    }

    if (num2 > num3) {
        aux = num2;
        num2 = num3;
        num3 = aux;
    }

    printf("\n Numeros em ordem crescente: %d %d %d \n", num1, num2, num3);
    
return 0;
}
