#include <stdio.h>
#include <locale.h>

/*
Fa�a um algoritmo que leia as seguintes informa��es de um grupo
indeterminado de produtos (c�digo, quantidade, tipo e valor), sendo que o
programa termina quando o c�digo do produto for zero. Fazer a valida��o
de todos os dados de entrada conforme tabela abaixo. No final, mostrar a
quantidade de produtos cadastrados, o valor total de produtos perec�veis e
n�o perec�veis.
C�digo do produto: >0
Quantidade: >0 e < 100
Tipo: 1- Perec�vel 2- N�o Perec�vel 3-Congelado
Valor: >0
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int codigo, quantidade, tipo;
    	float valor, totalPereciveis = 0, totalNaoPereciveis = 0, totalCongelados = 0;
    	int contPereciveis = 0, contNaoPereciveis = 0, contCongelados = 0, contTotal = 0;

    	do {
        	printf("Digite o c�digo do produto (ou 0 para sair): ");
        	scanf("%i", &codigo);

        	if(codigo != 0) {
            	printf("Digite a quantidade do produto: ");
            	scanf("%i", &quantidade);

            while(quantidade <= 0 || quantidade >= 100) {
                printf("Quantidade inv�lida. Digite novamente: ");
                scanf("%i", &quantidade);
            }

            printf("Digite o tipo do produto (1 - Perec�vel, 2 - N�o Perec�vel, 3 - Congelado): ");
            scanf("%i", &tipo);

            while(tipo < 1 || tipo > 3) {
                printf("Tipo inv�lido. Digite novamente: ");
                scanf("%i", &tipo);
            }

            printf("Digite o valor do produto: ");
            scanf("%f", &valor);

            while(valor <= 0) {
                printf("Valor inv�lido. Digite novamente: ");
                scanf("%f", &valor);
            }

            contTotal++;

            if(tipo == 1) {
                totalPereciveis += valor * quantidade;
                contPereciveis++;
            } else if (tipo == 2) {
                totalNaoPereciveis += valor * quantidade;
                contNaoPereciveis++;
            } else if (tipo == 3) {
            	totalCongelados += valor * quantidade;
            	contCongelados++;
			}
        }
    } while(codigo != 0);

    	printf("\nQuantidade de produtos cadastrados: %i\n", contTotal);
    	printf("Valor total de produtos perec�veis: R$ %.2f\n", totalPereciveis);
    	printf("Valor total de produtos n�o perec�veis: R$ %.2f\n", totalNaoPereciveis);
    	printf("Valor total de produtos congelados: R$ %.2f\n", totalCongelados);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


