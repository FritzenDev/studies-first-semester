#include <stdio.h>
#include <locale.h>

/*
Fa�a um algoritmo que leia o destino do passageiro, se a viagem incluir retorno
(ida e volta), informar o valor da passagem de acordo com a tabela a seguir:
Destino IDA IDA e VOLTA
Regi�o Norte R$500,00 R$900,00
Regi�o
Nordeste
R$350,00 R$650,00
Regi�o
Centro-Oeste
R$350,00 R$600,00
Regi�o Sul R$300,00 R$550,00 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int op, op1;
		
		printf("Escolha uma op��o (1 - IDA | 2 - IDA E VOLTA): ");
		scanf("%i", &op);
		
		printf("Escolha uma op��o (1 - Norte | 2 - Nordeste | 3 - Centro-Oeste | 4 - Sul): ");
		scanf("%i", &op1);
		
		if (op == 1 && op1 == 1) {
			printf("O valor ser�: R$500,00\n");
		}
		if (op == 2 && op1 == 1) {
			printf("O valor ser�: R$900,00\n");
		}
		if (op == 1 && op1 == 2) {
			printf("O valor ser�: R$350,00\n");
		}
		if (op == 2 && op1 == 2) {
			printf("O valor ser�: R$650,00\n");
		}
		if (op == 1 && op1 == 3) {
			printf("O valor ser�: R$350,00\n");
		}
		if (op == 2 && op1 == 3) {
			printf("O valor ser�: R$600,00\n");
		}
		if (op == 1 && op1 == 4) {
			printf("O valor ser�: R$300,00\n");
		}
		if (op == 2 && op1 == 4) {
			printf("O valor ser�: R$550,00\n");
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


