#include <stdio.h>
#include <locale.h>

/*
Faça um programa que peça uma nota, entre zero e dez. Mostre uma
mensagem caso o valor seja inválido e continue pedindo até que o
usuário informe um valor válido.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		float nota;
		
		do {
			printf("Digite uma nota entre 0 e 10: ");
			scanf("%f", &nota);
			
			if (nota >= 0 && nota <= 10) {
				printf("Valor válido\n");
			} else {
				printf("Valor inválido\n");
			}
		} while (nota < 0 || nota > 10);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


