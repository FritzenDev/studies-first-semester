#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que leia o ano de nascimento de uma pessoa. Escreva
todos os anos na tela em ordem decrescente a partir do ano atual (2023).
Conte a quantidade de anos que se passaram e ao final imprima o total de
anos (que será a idade desta pessoa).
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int ano, anoAtt = 2023, cont = 0;
		
		printf("Digite o seu ano de nascimento: ");
		scanf("%i", &ano);
		
		if (ano > anoAtt || ano < 1900) {
			printf("Ano inválido\n");
			break;
		}
		
		for (ano; ano < anoAtt; anoAtt--) {
			printf("%i\n", anoAtt);
			cont++;
		}
		printf("Se passaram %i anos desde que você nasceu\n", cont);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


