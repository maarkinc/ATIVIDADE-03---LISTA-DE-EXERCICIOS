//MVC-42

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-42 - Quantidade de números ímpares digitados  *");
printf("\n**************************************************************");


int numero, i;
int quantidadeImpares = 0;

    for (i = 1; i <= 10; i++) {
        printf("\nDigite o numero: ");
        scanf("%d", &numero);

        if (numero % 2 != 0) {
            quantidadeImpares++;
        }
    }

    printf("\nQuantidade de numeros impares digitados: %d\n", quantidadeImpares);

return 0;
}
