#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que l� 10 n�meros, calcula a m�dia e ao final mostra
quantos valores s�o maiores que a m�dia e os n�meros. 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num[10], numY[10];
		float media, soma = 0;
		int maior = 0, menor = 0;
		int cont = 0;
		int i;
		
		for (i = 0; i < 10; i++) {
			printf("Digite o %i� n�mero: ", i+1);
			scanf("%i", &num[i]);
			soma += num[i];
		}
		media = soma / 10;
		
		for (i = 0; i < 10; i++) {
			if (num[i] > media) {
				numY[cont] = num[i];
				cont++;
			}
		}

		printf("\nM�dia dos 10 n�meros: %.2f\n", media);
		printf("Valores maior que a m�dia: %i\n", cont);
		printf("N�meros digitados maiores que a m�dia:\n");
		for (i = 0; i < cont; i++) {
			printf("%i ", numY[i]);
		}
		
		
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


