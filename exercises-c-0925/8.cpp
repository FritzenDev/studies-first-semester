#include <stdio.h>
#include <locale.h>

/*
Para doar sangue � necess�rio ter entre 18 e 67 anos. Fa�a um aplicativo na
linguagem C que pergunte a idade de uma pessoa e diga se ela pode doar sangue
ou n�o. Use alguns dos operadores l�gicos OU (||) e E (&&).
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int idd;
		
		printf("Digite sua idade: ");
		scanf("%i", &idd);
		
		if (idd >= 18 && idd <= 67) {
			printf("� permitido a doa��o de sangue!\n");
		} else {
			printf("N�o � permitido a doa��o de sangue!\n");
		}
		
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


