#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que pe�a uma nota, entre zero e dez. Mostre uma
mensagem caso o valor seja inv�lido e continue pedindo at� que o
usu�rio informe um valor v�lido.
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
				printf("Valor v�lido\n");
			} else {
				printf("Valor inv�lido\n");
			}
		} while (nota < 0 || nota > 10);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


