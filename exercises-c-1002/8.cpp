#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que mostra os valores a partir de um intervalo informado pelo
usu�rio.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num1, num2;
		
		printf("Digite o intervalo que voc� deseja: ");
		scanf("%i%i", &num1, &num2);
	
		for (num1 = num1; num1 <= num2; num1++) {
			printf("%i\n", num1);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


