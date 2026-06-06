//MVC-37

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-37 - Soma de números até digitar zero         *");
printf("\n**************************************************************");

 int numero;
    int soma = 0;

    do {
        printf("\nDigite um numero (0 para encerrar): ");
        scanf("%d", &numero);

        soma += numero;

    } while (numero != 0);

    printf("\n A soma total dos numeros digitados é: %d\n", soma);
    
return 0;
}
