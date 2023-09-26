#include <stdio.h>
#include <locale.h>

/*
Para doar sangue é necessário ter entre 18 e 67 anos. Faça um aplicativo na
linguagem C que pergunte a idade de uma pessoa e diga se ela pode doar sangue
ou não. Use alguns dos operadores lógicos OU (||) e E (&&).
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int idd;
		
		printf("Digite sua idade: ");
		scanf("%i", &idd);
		
		if (idd >= 18 && idd <= 67) {
			printf("É permitido a doação de sangue!\n");
		} else {
			printf("Não é permitido a doação de sangue!\n");
		}
		
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


