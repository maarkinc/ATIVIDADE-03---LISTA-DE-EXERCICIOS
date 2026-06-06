//MVC-16

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-16 - Múltiplo de 3 e/ou 5                     *");
printf("\n**************************************************************");

int pedido;

    printf("\n Digite o numero do pedido: ");
    scanf("%d", &pedido);

    if (pedido % 3 == 0 && pedido % 5 == 0) {
        printf("Parabens! O cliente ganhou um refrigerante e uma sobremesa.\n");
    }
    else if (pedido % 3 == 0) {
        printf("Parabens! O cliente ganhou um refrigerante.\n");
    }
    else if (pedido % 5 == 0) {
        printf("Parabens! O cliente ganhou uma sobremesa.\n");
    }
    else {
        printf("O cliente nao ganhou brindes.\n");
    }
    
    return 0;
}
