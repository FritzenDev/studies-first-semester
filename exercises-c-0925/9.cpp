#include <stdio.h>
#include <locale.h>

/*
Depois da libera��o do governo para as mensalidades dos planos de sa�de, as
pessoas come�aram a fazer pesquisas para descobrir um bom plano, n�o muito
caro. Um vendedor de um plano de sa�de apresentou a tabela a seguir. Fa�a um
programa que entre com a idade de uma pessoa e imprime o valor que ela dever�
pagar.
- at� 10 anos - R$30,00
- acima de 10 anos at� 29 anos - R$60,00
- acima de 29 anos at� 45 anos - R$120,00
- acima de 45 anos at� 59 anos - R$150,00
- acima de 59 anos at� 65 anos - R$250,00
- maior que 65 anos - R$400,00
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int idd;
		
		printf("Digite sua idade: ");
		scanf("%i", &idd);
		
		if (idd > 0 && idd <= 10) {
			printf("Voc� dever� pagar R$30,00 pelo plano.\n");
		}
		if (idd > 10 && idd <= 29) {
			printf("Voc� dever� pagar R$60,00 pelo plano.\n");
		}
		if (idd > 29 && idd <= 45) {
			printf("Voc� dever� pagar R$120,00 pelo plano.\n");
		}
		if (idd > 45 && idd <= 59) {
			printf("Voc� dever� pagar R$150,00 pelo plano.\n");
		}
		if (idd > 59 && idd <= 65) {
			printf("Voc� dever� pagar R$250,00 pelo plano.\n");
		}
		if (idd > 65) {
			printf("Voc� dever� pagar R$400,00 pelo plano.\n");
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


