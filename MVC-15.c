//MVC-15

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
printf("\n**************************************************************");
printf("\n*       ALUNO - MARCUS VINICIUS COSTA - RA: 0028073          *");
printf("\n* PROGRAMA MVC-15 - Quantas caixas cabem dentro do caminhão? *");
printf("\n**************************************************************");

    float altCaminhao, largCaminhao, compCaminhao;
    float altCaixa, largCaixa, compCaixa;
    int qtdAltura, qtdLargura, qtdComprimento;
    int total;

    printf("\n Digite a altura do caminhao: ");
    scanf("%f", &altCaminhao);

    printf("Digite a largura do caminhao: ");
    scanf("%f", &largCaminhao);

    printf("Digite o comprimento do caminhao: ");
    scanf("%f", &compCaminhao);

   
    printf("\nDigite a altura da caixa: ");
    scanf("%f", &altCaixa);

    printf("Digite a largura da caixa: ");
    scanf("%f", &largCaixa);

    printf("Digite o comprimento da caixa: ");
    scanf("%f", &compCaixa);


    total = qtdAltura*qtdLargura*qtdComprimento;

    printf("\nTotal de caixas que cabem no caminhao: %d\n", total);

    return 0;
}
