//MVC-44

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-44 - Contar dígitos de um número              *");
printf("\n**************************************************************");

int numero; 
int quantidadeDigitos= 0;

    printf("\nDigite um numero positivo: ");
    scanf("%d", &numero);

    if (numero == 0) {
        quantidadeDigitos = 1;
        
    } 
	else {
        while (numero > 0) {
            numero = numero / 10;
            quantidadeDigitos++;
        }
    }

    printf("O numero possui %d digito(s).\n", quantidadeDigitos);


return 0;
}
